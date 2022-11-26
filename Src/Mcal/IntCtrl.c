/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  IntCrtl.c
 *        \brief  Nested Vector Interrupt Controller Driver
 *
 *      \details  The Driver Configure All MCU interrupts Priority into gorups and subgroups
 *                Enable NVIC Interrupt Gate for Peripherals
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "IntCtrl.h"
#include "IntCtrl_Lcfg.h"
#include "Mcu_Hw.h"

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

void IntCrtl_Init(const Int_Cfg* IntPtr)
{   
  uint32 i ;
  
  for ( i= 0 ; i < Active_Interrupts ; i++) { 
    
    uint8 En_Reg = Interrupts[i].Interrupt / 32 ;              //Determine Enable Reg nummber
    
    uint32 interrupt  = Interrupts[i].Interrupt - 32*En_Reg;   //Number of interrupt bit
    
    uint8 PRI_Reg = interrupt / 3 ;                            //Determine PRI Reg number
    
    APINT = (0x05FA << 16) | (Grouping << 8);
	
    switch (En_Reg)
    {
    case 0:
        NVIC_EN0 = (1<<interrupt);
        break;
    
    case 1:
        NVIC_EN1 = (1<<interrupt);
        break;

    case 2:
        NVIC_EN2 = (1<<interrupt);
        break;

    case 3:
        NVIC_EN3 = (1<<interrupt);
        break;

    case 4:   
        NVIC_EN4 = (1<<interrupt);
        break;
    }
  
    
    /*TODO Configure Grouping\SubGrouping System in APINT register in SCB*/

    
    /*TODO : Assign Group\Subgroup priority in NVIC_PRIx Nvic and SCB_SYSPRIx Registers*/  
     

	/*TODO : Enable\Disable based on user configurations in NVIC_ENx and SCB_Sys Registers */


  }	

}

/**********************************************************************************************************************
 *  END OF FILE: IntCrtl.c
 *********************************************************************************************************************/
