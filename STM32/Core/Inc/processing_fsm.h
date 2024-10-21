/*
 * processing_fsm.h
 *
 *  Created on: Oct 22, 2024
 *      Author: Admin
 */

#ifndef INC_PROCESSING_FSM_H_
#define INC_PROCESSING_FSM_H_

#include "input_button.h"
#include "output_led7seg.h"
#include "output_traffic.h"
#include "software_timer.h"

enum FSM_STATE {FSM_NORMAL, FSM_RED_MOD, FSM_AMBER_MOD, FSM_GREEN_MOD};

void fsmInit(void);
void fsmReInit(enum FSM_STATE state);
void fsmProcessing(void);

#endif /* INC_PROCESSING_FSM_H_ */