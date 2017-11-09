#ifndef  BSP_PRESENT
#define  BSP_PRESENT


/*
*********************************************************************************************************
*                                                 EXTERNS
*********************************************************************************************************
*/

#ifdef   BSP_MODULE
#define  BSP_EXT
#else
#define  BSP_EXT  extern
#endif


/*
*********************************************************************************************************
*                                              INCLUDE FILES
*********************************************************************************************************
*/

#include  <cpu.h>
#include  <cpu_core.h>

#include  <lib_def.h>
#include  <stm32f4xx.h>
#include "stm32f4_usart.h"




#define BSP_LED_GREEN					GPIO_Pin_13
#define BSP_LED_RED						GPIO_Pin_14
#define BSP_LED_ALL						LED_GREEN | LED_RED

typedef enum
{
	LED_GREEN = 0,
	LED_RED = 1,
	LED_ALL = 2
} Led_TypeDef;

/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void BSP_Init(void);


/*
*********************************************************************************************************
*                                              LED SERVICES
*********************************************************************************************************
*/
void BSP_LED_Init(void);
void BSP_LED_On(Led_TypeDef  led);

void BSP_LED_Off(Led_TypeDef  led);

void BSP_LED_Toggle(Led_TypeDef  led);


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif                                                          /* End of module include.                               */

