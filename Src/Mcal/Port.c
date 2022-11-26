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
#include "GPIO.h"
#include "Port.h"
#include "Port_Lcfg.h"

/******************************************************************************
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void Port_Init(const PinConfig* ConfigPtr)
{   
uint32 i ;

for ( i = 0; i < Active_pins; i++) { 

    uint8   port  = pins[i].Pin / 8        ,
            pin   = pins[i].Pin - (port*8) ;
	 
    RCGCGPIO |= (1<<port)                       ;

/*--------------------------------------------------------------------------------------------------------------------------------*/ 

    switch (port){

    case 0:{
        
        switch(ConfigPtr->Dir){
            case 0: //input
                GPIO_PORTA_DIR &= ~(1<<pin)  ;
            break;
        
            case 1: //output
                GPIO_PORTA_DIR |= (1<<pin)   ;
        break;
    }

        switch(ConfigPtr-> Mode){
            case 0: // DIO
                GPIO_PORTA_DEN |= (1<<pin)   ;
        break;
            case 1: // UART
                   
        break;
            case 2: // I2C
                
        break;
    }  

        switch(ConfigPtr-> Attach){
            case 0: //PUR
                GPIO_PORTA_LOCK = 0x4C4F434B ;
                GPIO_PORTA_CR  |= (1<<pin)   ;  
                GPIO_PORTA_PUR |= (1<<pin)   ;
        break;
            case 1: //PDR
                GPIO_PORTA_LOCK = 0x4C4F434B ;
                GPIO_PORTA_CR  |= (1<<pin)   ;
                GPIO_PORTA_PDR |= (1<<pin)   ;
        break;
            case 2: //Open_Drain
        
        break;
    }  

        switch(ConfigPtr->Current){
            case 0: //m2A
                
        break;
            case 1: //m4A
                
        break;
            case 2: //m8A
                
        break;
    }  
    WriteChannel(pins[i].Pin , pins->PinValue)    ;
    }
    break;
/*--------------------------------------------------------------------------------------------------------------------------------*/ 
    case 1:{
        switch(ConfigPtr->Dir){
            case 0: //input
                GPIO_PORTB_DIR &= ~(1<<pin)  ;
            break;
        
            case 1: //output
                GPIO_PORTB_DIR |= (1<<pin)   ;
        break;
    }

        switch(ConfigPtr-> Mode){
            case 0: // DIO
                GPIO_PORTB_DEN |= (1<<pin)   ;
        break;
            case 1: // UART
                   
        break;
            case 2: // I2C
                
        break;
    }  

        switch(ConfigPtr-> Attach){
            case 0: //PUR
                GPIO_PORTB_LOCK = 0x4C4F434B ;
                GPIO_PORTB_CR  |= (1<<pin)   ;  
                GPIO_PORTB_PUR |= (1<<pin)   ;
        break;
            case 1: //PDR
                GPIO_PORTB_LOCK = 0x4C4F434B ;
                GPIO_PORTB_CR  |= (1<<pin)   ;
                GPIO_PORTB_PDR |= (1<<pin)   ;
        break;
            case 2: //Open_Drain
        
        break;
    }  

        switch(ConfigPtr->Current){
            case 0: //m2A
                
        break;
            case 1: //m4A
                
        break;
            case 2: //m8A
                
        break;
    }  
    WriteChannel(pins[i].Pin , pins->PinValue)        ;
    }
    break;
/*--------------------------------------------------------------------------------------------------------------------------------*/
    case 2:{
        
        switch(ConfigPtr->Dir){
            case 0: //input
                GPIO_PORTC_DIR &= ~(1<<pin)  ;
            break;
        
            case 1: //output
                GPIO_PORTC_DIR |= (1<<pin)   ;
        break;
    }

        switch(ConfigPtr-> Mode){
            case 0: // DIO
                GPIO_PORTC_DEN |= (1<<pin)   ;
        break;
            case 1: // UART
                   
        break;
            case 2: // I2C
                
        break;
    }  

        switch(ConfigPtr-> Attach){
            case 0: //PUR
                GPIO_PORTC_LOCK = 0x4C4F434B ;
                GPIO_PORTC_CR  |= (1<<pin)   ;  
                GPIO_PORTC_PUR |= (1<<pin)   ;
        break;
            case 1: //PDR
                GPIO_PORTC_LOCK = 0x4C4F434B ;
                GPIO_PORTC_CR  |= (1<<pin)   ;
                GPIO_PORTC_PDR |= (1<<pin)   ;
        break;
            case 2: //Open_Drain
        
        break;
    }  

        switch(ConfigPtr->Current){
            case 0: //m2A
                
        break;
            case 1: //m4A
                
        break;
            case 2: //m8A
                
        break;
    }  
    WriteChannel(pins[i].Pin , pins->PinValue)        ;
    break; 
    }
/*--------------------------------------------------------------------------------------------------------------------------------*/
    case 3:{
    
        switch(ConfigPtr->Dir){
            case 0: //input
                GPIO_PORTD_DIR &= ~(1<<pin)  ;
            break;
        
            case 1: //output
                GPIO_PORTD_DIR |= (1<<pin)   ;
        break;
    }

        switch(ConfigPtr-> Mode){
            case 0: // DIO
                GPIO_PORTD_DEN |= (1<<pin)   ;
        break;
            case 1: // UART
                   
        break;
            case 2: // I2C
                
        break;
    }  

        switch(ConfigPtr-> Attach){
            case 0: //PUR
                GPIO_PORTD_LOCK = 0x4C4F434B ;
                GPIO_PORTD_CR  |= (1<<pin)   ;  
                GPIO_PORTD_PUR |= (1<<pin)   ;
        break;
            case 1: //PDR
                GPIO_PORTD_LOCK = 0x4C4F434B ;
                GPIO_PORTD_CR  |= (1<<pin)   ;
                GPIO_PORTD_PDR |= (1<<pin)   ;
        break;
            case 2: //Open_Drain
        
        break;
    }  

        switch(ConfigPtr->Current){
            case 0: //m2A
                
        break;
            case 1: //m4A
                
        break;
            case 2: //m8A
                
        break;
    }  
    WriteChannel(pins[i].Pin , pins->PinValue)        ;
    break;
    }
/*--------------------------------------------------------------------------------------------------------------------------------*/
    case 4:{
    
        switch(ConfigPtr->Dir){
            case 0: //input
                GPIO_PORTE_DIR &= ~(1<<pin)  ;
            break;
        
            case 1: //output
                GPIO_PORTE_DIR |= (1<<pin)   ;
        break;
    }

        switch(ConfigPtr-> Mode){
            case 0: // DIO
                GPIO_PORTE_DEN |= (1<<pin)   ;
        break;
            case 1: // UART
                   
        break;
            case 2: // I2C
                
        break;
    }  

        switch(ConfigPtr-> Attach){
            case 0: //PUR
                GPIO_PORTE_LOCK = 0x4C4F434B ;
                GPIO_PORTE_CR  |= (1<<pin)   ;  
                GPIO_PORTE_PUR |= (1<<pin)   ;
        break;
            case 1: //PDR
                GPIO_PORTE_LOCK = 0x4C4F434B ;
                GPIO_PORTE_CR  |= (1<<pin)   ;
                GPIO_PORTE_PDR |= (1<<pin)   ;
        break;
            case 2: //Open_Drain
        
        break;
    }  

        switch(ConfigPtr->Current){
            case 0: //m2A
                
        break;
            case 1: //m4A
                
        break;
            case 2: //m8A
                
        break;
    }  
    WriteChannel(pins[i].Pin , pins->PinValue)        ;
    break;
    }
/*--------------------------------------------------------------------------------------------------------------------------------*/
    case 5:{
        switch(ConfigPtr->Dir){
            case 0: //input
                GPIO_PORTF_DIR &= ~(1<<pin)  ;
            break;
        
            case 1: //output
                GPIO_PORTF_DIR |= (1<<pin)   ;
        break;
    }

        switch(ConfigPtr-> Mode){
            case 0: // DIO
                GPIO_PORTF_DEN |= (1<<pin)   ;
        break;
            case 1: // UART
                   
        break;
            case 2: // I2C
                
        break;
    }  

        switch(ConfigPtr-> Attach){
            case 0: //PUR
                GPIO_PORTF_LOCK = 0x4C4F434B ;
                GPIO_PORTF_CR  |= (1<<pin)   ;  
                GPIO_PORTF_PUR |= (1<<pin)   ;
        break;
            case 1: //PDR
                GPIO_PORTF_LOCK = 0x4C4F434B ;
                GPIO_PORTF_CR  |= (1<<pin)   ;
                GPIO_PORTF_PDR |= (1<<pin)   ;
        break;
            case 2: //Open_Drain
        
        break;
    }  

        switch(ConfigPtr->Current){
            case 0: //m2A
                
        break;
            case 1: //m4A
                
        break;
            case 2: //m8A
                
        break;
    }  
    WriteChannel(pins[i].Pin , pins->PinValue)    ;
    break;
    }

}
}
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
