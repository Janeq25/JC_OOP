#include "led.h"
#include <stdio.h>


void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	Led My_Led = Led();
	My_Led.LedInit();

	while(1){
		Delay(100);
		My_Led.LedStepLeft();
	}
}
