/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPT.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef GPT_H
#define GPT_H
/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum{
    
    Timer0_16,
    Timer1_16,
    Timer2_16,
    Timer3_16,
    Timer4_16,
    Timer5_16,
    
    Timer0_32,
    Timer1_32,
    Timer2_32,
    Timer3_32,
    Timer4_32,
    Timer5_32

}Gpt_ChannelType;

typedef unsigned long Gpt_Value;

typedef enum{
    One_Shot,
    Continous
}Gpt_Mode;

typedef enum{
    Predef_Timer_1US_16Bit,
    Predef_Timer_1US_24Bit,
    Predef_Timer_1US_32Bit,
    Predef_Timer_100US_16Bit
}Predef_Timer;

typedef struct{
    
Gpt_ChannelType Timer           ;
Gpt_Value MaxTickVal            ;
Gpt_Mode Mode                   ;
unsigned short TickFrequency    ;

}Gpt_ChannelConfig;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
extern Gpt_ChannelConfig Timers[] ;
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/



 
#endif  /* GPT_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
