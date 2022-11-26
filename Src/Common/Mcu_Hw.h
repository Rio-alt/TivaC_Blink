/**********************************************************************************************************************
 * FILE DESCRIPTION 
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  Mcu_Hw
 *
 *  Description:  header file for Registers definition    
 *  
 *********************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct 
{
    uint32 VECACT   :8;
    uint32          :3;
    uint32 RETBASE  :1;
    uint32 VECPEND1 :3;
    uint32 VECPEND2 :4;
    uint32          :2;
    uint32 ISRPEND  :1;
    uint32 ISRPRE   :1;
    uint32          :1;
    uint32 PENDSTCLR:1;
    uint32 PENDSTSET:1;
    uint32 UNPENDSV :1;
    uint32 PENDSV   :1;
    uint32          :2;
    uint32 NMISET   :1; 
}INTCTRL_BF;

typedef union 
{
    uint32 R;
    INTCTRL_BF B;
}INTCTRL_Tag;



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



#define BITBAND_PERI_BASE                      0x40000000
#define ALIAS_PERI_BASE 	                   0x42000000
#define BITBAND_PERI(R_BASE,bit_no)            (ALIAS_PERI_BASE + ((R_BASE - BITBAND_PERI_BASE) * 32) + (bit_no * 4))

#define CORTEXM4_SYSCTL_BASE                    0x400FE000
#define RCGCGPIO                               *((volatile unsigned long*)(CORTEXM4_SYSCTL_BASE+0x608))

#define CORTEXM4_PERI_BASE_ADDRESS             0xE000E000
#define APINT                                  *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C))
#define INTCTRL                                *((volatile INTCTRL_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04))

#define STCTRL                                 *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS+0x010))
#define STRELOAD                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS+0X014))
#define STCURRENT                              *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS+0X018))

#define NVIC_EN0                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x100))
#define NVIC_EN1                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x104))
#define NVIC_EN2                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x108))
#define NVIC_EN3                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x10C))
#define NVIC_EN4                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x110))

#define NVIC_DIS0                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x180))
#define NVIC_DIS1                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x184))
#define NVIC_DIS2                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x188))
#define NVIC_DIS3                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x18C))
#define NVIC_DIS4                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x190))

#define NVIC_PRI0                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x400))
#define NVIC_PRI1                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x404))
#define NVIC_PRI2                               *((volatile unsigned long*)(CORTEXM4_PERI_BASE_ADDRESS + 0x408))

#define GPIO_PORTA_APB_ADR                      0x40004000
#define GPIO_PORTB_APB_ADR                      0x40005000
#define GPIO_PORTC_APB_ADR                      0x40006000
#define GPIO_PORTD_APB_ADR                      0x40007000
#define GPIO_PORTE_APB_ADR                      0x40024000
#define GPIO_PORTF_APB_ADR                      0x40025000

#define DATA_OFF                                0X000003FC
#define GPIO_PORTA_DATA                         (GPIO_PORTA_APB_ADR + DATA_OFF)
#define GPIO_PORTB_DATA                         (GPIO_PORTB_APB_ADR + DATA_OFF)
#define GPIO_PORTC_DATA                         (GPIO_PORTC_APB_ADR + DATA_OFF)
#define GPIO_PORTD_DATA                         (GPIO_PORTD_APB_ADR + DATA_OFF)
#define GPIO_PORTE_DATA                         (GPIO_PORTE_APB_ADR + DATA_OFF)
#define GPIO_PORTF_DATA                         (GPIO_PORTF_APB_ADR + DATA_OFF)

#define DIR_OFF                                 0X00000400
#define GPIO_PORTA_DIR                          *((volatile unsigned long*)(GPIO_PORTA_APB_ADR + DIR_OFF))
#define GPIO_PORTB_DIR                          *((volatile unsigned long*)(GPIO_PORTB_APB_ADR + DIR_OFF))
#define GPIO_PORTC_DIR                          *((volatile unsigned long*)(GPIO_PORTC_APB_ADR + DIR_OFF))
#define GPIO_PORTD_DIR                          *((volatile unsigned long*)(GPIO_PORTD_APB_ADR + DIR_OFF))
#define GPIO_PORTE_DIR                          *((volatile unsigned long*)(GPIO_PORTE_APB_ADR + DIR_OFF))
#define GPIO_PORTF_DIR                          *((volatile unsigned long*)(GPIO_PORTF_APB_ADR + DIR_OFF))

#define DEN_OFF                                 0X0000051C
#define GPIO_PORTA_DEN                          *((volatile unsigned long*)(GPIO_PORTA_APB_ADR + DEN_OFF))
#define GPIO_PORTB_DEN                          *((volatile unsigned long*)(GPIO_PORTB_APB_ADR + DEN_OFF))
#define GPIO_PORTC_DEN                          *((volatile unsigned long*)(GPIO_PORTC_APB_ADR + DEN_OFF))
#define GPIO_PORTD_DEN                          *((volatile unsigned long*)(GPIO_PORTD_APB_ADR + DEN_OFF))
#define GPIO_PORTE_DEN                          *((volatile unsigned long*)(GPIO_PORTE_APB_ADR + DEN_OFF))
#define GPIO_PORTF_DEN                          *((volatile unsigned long*)(GPIO_PORTF_APB_ADR + DEN_OFF))

#define LOCK_OFF                                0X00000520
#define GPIO_PORTA_LOCK                         *((volatile unsigned long*)(GPIO_PORTA_APB_ADR + LOCK_OFF))
#define GPIO_PORTB_LOCK                         *((volatile unsigned long*)(GPIO_PORTB_APB_ADR + LOCK_OFF))
#define GPIO_PORTC_LOCK                         *((volatile unsigned long*)(GPIO_PORTC_APB_ADR + LOCK_OFF))
#define GPIO_PORTD_LOCK                         *((volatile unsigned long*)(GPIO_PORTD_APB_ADR + LOCK_OFF))
#define GPIO_PORTE_LOCK                         *((volatile unsigned long*)(GPIO_PORTE_APB_ADR + LOCK_OFF))
#define GPIO_PORTF_LOCK                         *((volatile unsigned long*)(GPIO_PORTF_APB_ADR + LOCK_OFF))

#define CR_OFF                                  0X00000524
#define GPIO_PORTA_CR                           *((volatile unsigned long*)(GPIO_PORTA_APB_ADR + CR_OFF))
#define GPIO_PORTB_CR                           *((volatile unsigned long*)(GPIO_PORTB_APB_ADR + CR_OFF))
#define GPIO_PORTC_CR                           *((volatile unsigned long*)(GPIO_PORTC_APB_ADR + CR_OFF))
#define GPIO_PORTD_CR                           *((volatile unsigned long*)(GPIO_PORTD_APB_ADR + CR_OFF))
#define GPIO_PORTE_CR                           *((volatile unsigned long*)(GPIO_PORTE_APB_ADR + CR_OFF))
#define GPIO_PORTF_CR                           *((volatile unsigned long*)(GPIO_PORTF_APB_ADR + CR_OFF))

#define PUR_OFF                                 0X00000510
#define GPIO_PORTA_PUR                          *((volatile unsigned long*)(GPIO_PORTA_APB_ADR + PUR_OFF))
#define GPIO_PORTB_PUR                          *((volatile unsigned long*)(GPIO_PORTB_APB_ADR + PUR_OFF))
#define GPIO_PORTC_PUR                          *((volatile unsigned long*)(GPIO_PORTC_APB_ADR + PUR_OFF))
#define GPIO_PORTD_PUR                          *((volatile unsigned long*)(GPIO_PORTD_APB_ADR + PUR_OFF))
#define GPIO_PORTE_PUR                          *((volatile unsigned long*)(GPIO_PORTE_APB_ADR + PUR_OFF))
#define GPIO_PORTF_PUR                          *((volatile unsigned long*)(GPIO_PORTF_APB_ADR + PUR_OFF))

#define PDR_OFF                                 0X00000514
#define GPIO_PORTA_PDR                          *((volatile unsigned long*)(GPIO_PORTA_APB_ADR + PDR_OFF))
#define GPIO_PORTB_PDR                          *((volatile unsigned long*)(GPIO_PORTB_APB_ADR + PDR_OFF))
#define GPIO_PORTC_PDR                          *((volatile unsigned long*)(GPIO_PORTC_APB_ADR + PDR_OFF))
#define GPIO_PORTD_PDR                          *((volatile unsigned long*)(GPIO_PORTD_APB_ADR + PDR_OFF))
#define GPIO_PORTE_PDR                          *((volatile unsigned long*)(GPIO_PORTE_APB_ADR + PDR_OFF))
#define GPIO_PORTF_PDR                          *((volatile unsigned long*)(GPIO_PORTF_APB_ADR + PDR_OFF))


 

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 

 
#endif  /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/
