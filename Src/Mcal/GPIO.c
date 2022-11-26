#include "GPIO.h"
#include "Mcu_Hw.h"


LevelType ReadChannel(ChannelType ChannelID){
    uint8 data, port = ChannelID/8, pin = ChannelID - (port*8)   ;

    switch(port){

        case 0:{                
                 data = (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTA_DATA,pin));           
            break;           
        }
        case 1:{ 
                 data = (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTB_DATA,pin));
            break;
        }
        case 2:{ 
                 data = (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTC_DATA,pin));
            break;
        }
        case 3:{  
                 data = (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTD_DATA,pin));
            break;
        }
        case 4:{ 
                 data = (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTE_DATA,pin));
            break;
        }
        case 5:{  
                 data = (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTF_DATA,pin));
            break;
        }
    }
    return data ;    
}


void WriteChannel(ChannelType ChannelID,LevelType Level){
    uint8 port = ChannelID/8        , data ,
          pin = ChannelID - (port*8)    ;
   

    switch(port){

        case 0:{  
                 (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTA_DATA,pin)) = Level;                  
            break;           
        }
        case 1:{ 
                 (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTB_DATA,pin)) = Level;
            break;
        }
        case 2:{  
                 (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTC_DATA,pin)) = Level;
            break;
        }
        case 3:{ 
                 (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTD_DATA,pin)) = Level;
            break;
        }
        case 4:{ 
                 (*(volatile unsigned int*)BITBAND_PERI(GPIO_PORTE_DATA,pin)) = Level;
            break;
        }
        case 5:{
                (*(volatile unsigned int*)(BITBAND_PERI(GPIO_PORTF_DATA,pin))) = Level;
                   
            break;
        }
        
    }   
}


PortLevelType ReadPort(PortType PortID){
    uint8 data ;

    switch(PortID){

        case 0:{  
                 data = (*(volatile unsigned int*)GPIO_PORTA_DATA);           
            break;           
        }
        case 1:{  
                 data = (*(volatile unsigned int*)GPIO_PORTB_DATA);             
            break;
        }
        case 2:{
                 data = (*(volatile unsigned int*)GPIO_PORTC_DATA); 
            break;
        }
        case 3:{  
                 data = (*(volatile unsigned int*)GPIO_PORTD_DATA); 
            break;
        }
        case 4:{   
                 data = (*(volatile unsigned int*)GPIO_PORTE_DATA); 
            break;
        }
        case 5:{  
                 data = (*(volatile unsigned int*)GPIO_PORTF_DATA); 
            break;
        }
        
    }
    return data ;
    
}

void WritePort(PortType PortID,PortLevelType Level){

    switch(PortID){

        case 0:{  
                 
                 (*(volatile unsigned int*)GPIO_PORTA_DATA) = Level ;           
            break;           
        }
        case 1:{  
                 
                 (*(volatile unsigned int*)GPIO_PORTB_DATA) = Level;             
            break;
        }
        case 2:{  
                 
                 (*(volatile unsigned int*)GPIO_PORTC_DATA) = Level ; 
            break;
        }
        case 3:{  
                 
                 (*(volatile unsigned int*)GPIO_PORTD_DATA) = Level ; 
            break;
        }
        case 4:{  
                 
                 (*(volatile unsigned int*)GPIO_PORTE_DATA) = Level ; 
            break;
        }
        case 5:{  
                 
                 (*(volatile unsigned int*)GPIO_PORTF_DATA) = Level ; 
            break;
        } 
        
    }
}


void Flip_Channel(ChannelType ChannelID){
   
    WriteChannel(ChannelID,~ReadChannel(ChannelID));
    
}




