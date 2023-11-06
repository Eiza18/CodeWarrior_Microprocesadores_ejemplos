/* ###################################################################
**     Filename    : main.c
**     Project     : leds_ciclo
**     Processor   : MCF52233CAF60
**     Version     : Driver 01.00
**     Compiler    : CodeWarrior MCF C Compiler
**     Date/Time   : 2023-05-29, 16:27, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.00
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "LED1.h"
#include "LED2.h"
#include "LED3.h"
#include "LED4.h"
#include "DATO.h"
#include "CLOCK.h"
#include "EInt1.h"
#include "TI1.h"
#include "SERIAL.h"
#include "pinfoto.h"
#include "LCD1.h"
#include "LCD2.h"
#include "LCD3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "leds.h"
#include "DATO.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

void main(void)
{//unsigned char dato;
 unsigned char h=0;
 unsigned long i;
 const unsigned char SIZE =2;
 //unsigned char B[]={0x40,0x80,0x20,0x10,0x01,0x04,0x00,0x00};// RULETA
 unsigned char B[]={0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
 unsigned char Datos[SIZE]={0xAA,0x55};
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
 for(;;) {
	 
   //Tansmision (dato);
   Transmision2(Datos[h]); 
   if(++h>(SIZE-1)) h=0; 
	//fin main for----------------------------------------
 }
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/


/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale MCF series of microcontrollers.
**
** ###################################################################
*/
