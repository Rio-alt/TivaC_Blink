/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*       \file  FileName.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Mcu_Hw.h"
#include "Systk.h"
#include "GPIO.h"
#include "Port.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
void Systick_Init(){

    STCTRL     = 0      ;
    STCURRENT  = 0      ;
    STRELOAD   = 0X00FFFFFF ;
    STCTRL     = 0X05   ; 
}

void Systick_Wait_ms(float milliseconds){
    
    
    STRELOAD    = ((milliseconds/1000)*Clock_rate)-1 ; 
    STCTRL      = 0X07 ;
    STCURRENT   = 0 ;
     
}



void SysTick_Handler(void){
uint8 i ;

for (i = 0; i < Active_pins ;i++ )

    Flip_Channel(pins[i].Pin);
}



/**********************************************************************************************************************
 *  END OF FILE: Systk.c
 *********************************************************************************************************************/
