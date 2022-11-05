/*
 * control7SEG.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */

#include "main.h"
#include "control7SEG.h"
int counter =9;
void display7SEG()
{
	switch(counter)
{
	case 0: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
			break;
		}
		//led display number 1 by enable 2 ports as follow (reset state)
	case 1: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, SET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
			break;
		}
		//led display number 2 by enable 5 ports as follow (reset state)
	case 2: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, SET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		}
		//led display number 3 by enable 5 ports as follow (reset state)
	case 3: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		}
		//led display number 4 by enable 4 ports as follow (reset state)
	case 4: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, SET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		}
		//led display number 5 by enable 5 ports as follow (reset state)
	case 5: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, SET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		}
		//led display number 6 by enable 6 ports as follow (reset state)
	case 6: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, SET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		}
		//led display number 7 by enable 3 ports as follow (reset state)
	case 7: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
			break;
		}
		//led display number 8 by enable 7 ports as follow (reset state)
	case 8: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		}
		//led display number 9 by enable 6 ports as follow (reset state)
	case 9: {
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		}
	default:
					HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
					HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
					HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
					HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
					HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
					HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
					HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
					break;
}
}
