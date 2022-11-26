#include "Mcu_Hw.h"
#include "GPIO.h"
#include "Port.h"
#include "IntCtrl.h"
#include "Systk.h"

#define ON_Time_ms  1000
#define OFF_Time_ms 300


int main()
{
	Port_Init(&pins)						 ;
	IntCrtl_Init(&Interrupts)		 ;
	Systick_Init()							 ;
	
	Systick_Wait_ms(ON_Time_ms)  ;
	Systick_Wait_ms(OFF_Time_ms) ;

	while(1){}

}
