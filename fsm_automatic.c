
#include "fsm_automatic.h"
#include "control7SEG.h"
#include "timer.h"
#include "button.h"
int status =0;
void fsm_simple_buttons_run() {
switch(status)
{
case INIT:
	setTimer1(100);
	status = AUTO;
	if(isButton1Pressed()==1)
			{
				status = RESET;
				counter =0;
				display7SEG(counter);
				break;
				}
	 if(isButton2Pressed()==1)
				{
				status = INC;
				if(counter>9)
					counter=0;
				display7SEG(counter);
				break;
				}
	 if(isButton3Pressed()==1)
				{
				status = DEC;
				if(counter<0)
				counter=9;
				display7SEG(counter);
				break;
			}
	break;
case AUTO:
	{
		if(timer1_flag==1)
		{setTimer1(50);
			if(counter<0)
			break;
		display7SEG(counter);
				counter--;
				break;
		}

		if(isButton1Pressed()==1)
		{	setTimer1(1000);
			status = RESET;
			counter =0;
			display7SEG(counter);
			break;
			}
		if(isButton2Pressed()==1)
			{setTimer1(1000);
			status = INC;
			if(counter>9)
				counter=0;
			display7SEG(counter);
			break;
			}
			if(isButton3Pressed()==1)
		{	setTimer1(1000);
			status = DEC;
			if(counter<0)
			counter=9;
			display7SEG(counter);
			break;
		}
	}
case RESET:
	{

		if(isButton1Pressed()==1)
		{	setTimer1(1000);
			counter =0;
			display7SEG(counter);
			break;
		}
		 if(isButton2Pressed()==1)
			{	setTimer1(1000);
				status = INC;
				if(counter>9)
					counter =0;
				display7SEG(counter);
				counter = counter +1;
				break;

			}
		 if(isButton3Pressed()==1)
			{	setTimer1(1000);
				if(counter <0 )
					counter =9;
				display7SEG(counter);
				counter = counter -1;
				break;

			}
		 if(timer1_flag==1)
				{
					setTimer1(50);
					status = AUTO;
					break;
				}

		break;
	}
case INC:
{
	if(isButton2Pressed()==1)
	{	status=INC;
		setTimer1(1000);
		if(counter>9)
		counter=0;
		display7SEG(counter);
		counter=counter+1;
		break;

	}
	 if(isButton1Pressed()==1)
			{	setTimer1(1000);
				counter =0;
				display7SEG(counter);
				break;
			}
	 if(isButton3Pressed()==1)
				{	setTimer1(1000);
					if(counter <0)
						counter =9;
					counter = counter -1;
					display7SEG(counter);
					break;
				}
	 if(timer1_flag==1)
			{
				setTimer1(50);
				status = AUTO;
				break;
			}


break;
}
case DEC:
{
	if(isButton3Pressed()==1)
	{
	setTimer1(1000);
	if(counter<0)
		counter =9;
	display7SEG(counter);
	counter=counter-1;
	break;

	}
	if(isButton1Pressed()==1)
		{setTimer1(1000);
		status = RESET;
		counter =0;
		display7SEG(counter);
		break;
		}

	 if(isButton2Pressed()==1)
	{	setTimer1(1000);
		status =INC;
		if(counter>9)
			counter=0;
		display7SEG(counter);
		counter=counter +1;
		break;
	}
	if(timer1_flag==1)
		{
			setTimer1(50);
			status = AUTO;
			break;
		}
break;
}
default:
	break;
}
}
