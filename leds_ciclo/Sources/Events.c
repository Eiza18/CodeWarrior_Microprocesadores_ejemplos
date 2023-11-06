/* ###################################################################
**     Filename    : Events.c
**     Project     : leds_ciclo
**     Processor   : MCF52233CAF60
**     Component   : Events
**     Compiler    : CodeWarrior MCF C Compiler
**     Date/Time   : 2023-05-29, 16:27, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnCoreWatchdogINT - void Cpu_OnCoreWatchdogINT(void);
**
** ###################################################################*/
/*!
** @file Events.c
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"
#include "leds.h"

unsigned char banderaTimer;
/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Event       :  Cpu_OnCoreWatchdogINT (module Events)
**
**     Component   :  Cpu [MCF52233_112_LQFP]
**     Description :
**         This event is called when the OnCoreWatchdog interrupt had
**         occurred. This event is automatically enabled when the <Mode>
**         is set to 'Interrupt'.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void Cpu_OnCoreWatchdogINT(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  TIME1_OnInterrupt (module Events)
**
**     Component   :  TIME1 [TimerInt]
**     Description :
**         When a timer interrupt occurs this event is called (only
**         when the component is enabled - <Enable> and the events are
**         enabled - <EnableEvent>). This event is enabled only if a
**         <interrupt service/event> is enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void TIME1_OnInterrupt(void)
{
	
}

/*
** ===================================================================
**     Event       :  EInt1_OnInterrupt (module Events)
**
**     Component   :  EInt1 [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void EInt1_OnInterrupt(void)
{
  /* place your EInt1 interrupt procedure body here */
	LED4_NegVal();
}


/*
** ===================================================================
**     Event       :  TI1_OnInterrupt (module Events)
**
**     Component   :  TI1 [TimerInt]
**     Description :
**         When a timer interrupt occurs this event is called (only
**         when the component is enabled - <Enable> and the events are
**         enabled - <EnableEvent>). This event is enabled only if a
**         <interrupt service/event> is enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void TI1_OnInterrupt(void)
{
	static unsigned short int i,a;
	static unsigned short int chale;
	static unsigned short int  dato;
	static unsigned char  dato1;
	    if(i++>100){
		   i=0;
		  // LED1_NegVal();
		   }	
		if(a++>80){
		   a=0;
		   LED2_NegVal();}
		if(dato++>1000){dato=0;
			SERIAL_SendChar(dato1);
			LED3_NegVal();
			if(dato1<'0') dato1='0';
			if(dato1>'9'){
				dato1='0';	
			}else   dato1++;}
		banderaTimer=1; 	

}//fin timer---------------------------------------




/* END Events */

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
