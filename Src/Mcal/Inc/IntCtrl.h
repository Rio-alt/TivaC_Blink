/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCrtl.h
 *       Module:  IntCrtl
 *
 *  Description:  header file for IntCrtl Module    
 *  
 *********************************************************************************************************************/
#ifndef IntCrtl_H
#define IntCrtl_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "IntCtrl_Cfg.h"
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{   
    
    GPIO_Port_A             ,
    GPIO_Port_B             ,
    GPIO_Port_C             ,
    GPIO_Port_D             ,
    GPIO_Port_E             ,

    UART0                   ,
    UART1                   ,
    SSI0                    ,
    I2C0                    ,

    PWM0_Fault              ,
    PWM0_Generator0         ,
    PWM0_Generator1         ,
    PWM0_Generator2         ,

    QEI0                    ,
    ADC0_Seq0               ,
    ADC0_Seq1               ,
    ADC0_Seq2               ,
    ADC0_Seq3               ,
    
    Watchdog_Timer          ,
    Timer0A                 ,
    Timer0B                 ,
    Timer1A                 ,
    Timer1B                 ,
    Timer2A                 ,
    Timer2B                 ,

    Analog_Comp0            ,
    Analog_Comp1            ,

    Sys_Ctrl = 28           ,
    Flash_EEPROM_Control    ,
    GPIO_Port_F             ,
    UART2 = 33              ,
    SSI1                    ,
    Timer3A                 ,
    Timer3B                 ,

    I2C1                    ,
    QEI1                    ,
    CAN0                    ,
    CAN1                    ,

    Hibernation_Module = 43 ,
    USB                     ,
    PWM_Generator3          ,
    uDMA_Software           ,
    uDMA_Error              ,
    ADC1_Sequence_0         ,
    ADC1_Sequence_1         ,
    ADC1_Sequence_2         ,
    ADC1_Sequence_3         ,

    SSI2                    ,
    SSI3                    ,
    UART3                   ,
    UART4                   ,
    UART5                   ,
    UART6                   ,
    UART7                   ,
    I2C2 = 68               ,
    I2C3                    ,

    Timer4A                 ,
    Timer4B                 ,
    Timer5A = 92            ,
    Timer5B                 ,

    Timer0A_32_64           ,
    Timer0B_32_64           ,
    Timer1A_32_64           ,
    Timer1B_32_64           ,
    Timer2A_32_64           ,
    Timer2B_32_64           ,
    Timer3A_32_64           ,
    Timer3B_32_64           ,
    Timer4A_32_64           ,
    Timer4B_32_64           ,
    Timer5A_32_64           ,
    Timer5B_32_64           ,

    System_Exception        ,
    PWM1_Generator0 = 134   ,
    PWM1_Generator1         ,
    PWM1_Generator2         ,
    PWM1_Generator3         ,

    PWM1_Fault              
    
}IntCtrl_InterruptType;


typedef enum{

    XXX = 4     ,
    XXY         ,
    XYY         ,
    YYY       

}GroupOption;


typedef struct{

IntCtrl_InterruptType Interrupt;
unsigned short        Group;
unsigned short        SubGroup;

}Int_Cfg;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

extern Int_Cfg Interrupts[];
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 void IntCrtl_Init(const Int_Cfg* IntPtr);


/******************************************************************************
* \Syntax          : void IntCrtl_Init(void)                                      
* \Description     : initialize Nvic\SCB Module by parsing the Configuration 
*                    into Nvic\SCB registers                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/

 
#endif  /* IntCrtl_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCrtl.h
 *********************************************************************************************************************/
