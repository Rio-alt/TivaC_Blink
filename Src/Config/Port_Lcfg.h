/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef PORT_LCFG_H
#define PORT_LCFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Port.h"

PinConfig pins[  Active_pins  ] = {

    {F1,DIO,HIGH,OUTPUT,PUR,mA_2},
    {F2,DIO,HIGH,OUTPUT,PUR,mA_2},
		{F3,DIO,HIGH,OUTPUT,PUR,mA_2},
		
    };

#endif  /* PORT_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
