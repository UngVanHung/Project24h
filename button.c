/*
 * button.c
 *
 *  Created on: Oct 27, 2022
 *      Author: Linh
 */

#include "button.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;
int flag1=0;
int flag2=0;
int flag3=0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;

int TimerForKeyPress = 300;
int TimerForKeyPress2 = 300;
int TimerForKeyPress3 = 300;
int isButton1Pressed() {
	if (button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed() {
	if (button2_flag == 1) {
		button2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3Pressed() {
	if (button3_flag == 1) {
		button3_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess() {
	//TODO
	button1_flag = 1;
}

void subKeyProcess2() {
	//TODO
	button2_flag = 1;
}
void subKeyProcess3() {
	//TODO
	button3_flag = 1;
}
void init_button() {
	HAL_GPIO_WritePin(RESET_GPIO_Port, RESET_Pin, NORMAL_STATE);
	HAL_GPIO_WritePin(INC_GPIO_Port, INC_Pin, NORMAL_STATE);
	HAL_GPIO_WritePin(DEC_GPIO_Port, DEC_Pin, NORMAL_STATE);
}
void getKeyInput() {
	init_button();
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);

	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)) {
		if (KeyReg3 != KeyReg2) {
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE) {
				if(flag1==1)
				{
				subKeyProcess();
				TimerForKeyPress = 100;
				}
				else if(flag1==0)
				{
					TimerForKeyPress=300;
				}
				subKeyProcess();
			}
			else
				flag1=0;
		}
		else {
			TimerForKeyPress--;
			if (TimerForKeyPress == 0) {
				flag1=1;
				KeyReg3 = NORMAL_STATE;
			}
			else if(flag1==1)
			{
				flag1=0;
			}
		}
	}
}

void getKeyInput2() {
	init_button();
	KeyReg4 = KeyReg5;
	KeyReg5 = KeyReg6;
	KeyReg6 = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);

	if ((KeyReg4 == KeyReg5) && (KeyReg5 == KeyReg6)) {
		if (KeyReg7 != KeyReg6) {
			KeyReg7 = KeyReg6;
			if (KeyReg6 == PRESSED_STATE) {
				if(flag2==1)
				{
				subKeyProcess2();
				TimerForKeyPress2 = 100;
				}
				else if(flag2==0)
				{
					TimerForKeyPress2=300;
				}
				subKeyProcess2();
			}
			else
				flag2=0;
		}
		} else {
			TimerForKeyPress2--;
			if (TimerForKeyPress2 == 0) {
				flag2=1;
				KeyReg7 = NORMAL_STATE;
			}
			else if(flag2==1)
						{
							flag2=0;
						}
		}
	}
void getKeyInput3() {
	init_button();
	KeyReg8 = KeyReg9;
	KeyReg9 = KeyReg10;
	KeyReg10 = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);

	if ((KeyReg8 == KeyReg9) && (KeyReg9 == KeyReg10)) {
		if (KeyReg11 != KeyReg10) {
			KeyReg11 = KeyReg10;
			if (KeyReg10 == PRESSED_STATE){
				if(flag3==1)
				{
				subKeyProcess3();
				TimerForKeyPress3 = 100;
				}
				else if(flag3==0)
				{
					TimerForKeyPress3=300;
				}
				subKeyProcess3();
			}
			else
				flag3=0;
		}
		else {
			TimerForKeyPress3--;
			if (TimerForKeyPress3 == 0) {
				flag3=1;
				KeyReg11 = NORMAL_STATE;
			}
			else if(flag3==1)
						{
							flag3=0;
						}
		}
	}
}

