

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
extern int button1_flag;
extern int button2_flag;
extern int button3_flag;
extern int flag1;
extern int flag2;
extern int flag3;
extern int TimerForKeyPress;
extern int TimerForKeyPress2;
extern int TimerForKeyPress3;
#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();
void subKeyProcess();
void subKeyProcess2();
void subKeyProcess3();
void getKeyInput();
void getKeyInput2();
void getKeyInput3();
void init_button();

#endif /* INC_BUTTON_H_ */
