

#ifndef INC_FSM_AUTOMATIC_H_
#define INC_FSM_AUTOMATIC_H_

#include "main.h"
#include "control7SEG.h"
#include "button.h"
#define INIT 0
#define AUTO 1
#define RESET 2
#define INC 3
#define DEC 4
extern int status;
void fsm_simple_buttons_run();

#endif /* INC_FSM_AUTOMATIC_H_ */
