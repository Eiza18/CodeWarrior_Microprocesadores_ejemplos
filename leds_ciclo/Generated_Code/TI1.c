/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : TI1.c
**     Project     : leds_ciclo
**     Processor   : MCF52233CAF60
**     Component   : TimerInt
**     Version     : Component 02.161, Driver 01.04, CPU db: 3.00.000
**     Compiler    : CodeWarrior MCF C Compiler
**     Date/Time   : 2023-06-26, 18:11, # CodeGen: 43
**     Abstract    :
**         This component "TimerInt" implements a periodic interrupt.
**         When the component and its events are enabled, the "OnInterrupt"
**         event is called periodically with the period that you specify.
**         TimerInt supports also changing the period in runtime.
**         The source of periodic interrupt can be timer compare or reload
**         register or timer-overflow interrupt (of free running counter).
**     Settings    :
**         Timer name                  : GPTA_Counter (16-bit)
**         Compare name                : GPTA_Channel_1
**         Counter shared              : No
**
**         High speed mode
**             Prescaler               : divide-by-1
**             Clock                   : 29166667 Hz
**           Initial period/frequency
**             Xtal ticks              : 1500
**             microseconds            : 60
**             seconds (real)          : 0.00006
**             Hz                      : 16667
**             kHz                     : 17
**
**         Runtime setting             : none
**
**         Initialization:
**              Timer                  : Enabled
**              Events                 : Enabled
**
**         Timer registers
**              Counter                : GPTCNT    [0x001A0004]
**              Mode                   : GPTCTL2   [0x001A000B]
**              Run                    : GPTCTL1   [0x001A0009]
**              Prescaler              : GPTCTL2   [0x001A000B]
**
**         Compare registers
**              Compare                : GPTC1     [0x001A0012]
**
**         Flip-flop registers
**     Contents    :
**         No public methods
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file TI1.c
** @version 01.04
** @brief
**         This component "TimerInt" implements a periodic interrupt.
**         When the component and its events are enabled, the "OnInterrupt"
**         event is called periodically with the period that you specify.
**         TimerInt supports also changing the period in runtime.
**         The source of periodic interrupt can be timer compare or reload
**         register or timer-overflow interrupt (of free running counter).
*/         
/*!
**  @addtogroup TI1_module TI1 module documentation
**  @{
*/         

/* MODULE TI1. */

#include "Events.h"
#include "TI1.h"


/* Internal method prototypes */

/*
** ===================================================================
**     Method      :  TI1_Init (component TimerInt)
**
**     Description :
**         Initializes the associated peripheral(s) and the components 
**         internal variables. The method is called automatically as a 
**         part of the application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void TI1_Init(void)
{
  /* GPTIE: CI1=0 */
  clrReg8Bits(GPTIE, 0x02U);           /* Disable interrupt */ 
  /* GPTSCR1: GPTEN=0,??=0,??=0,TFFCA=0,??=0,??=0,??=0,??=0 */
  setReg8(GPTSCR1, 0x00U);             /* Stop timer */ 
  /* GPTIOS: IOS3=1,IOS1=1 */
  setReg8Bits(GPTIOS, 0x0AU);          /* Set up control registers */ 
  /* GPTCTL1: OM3=0,OL3=0,OM1=0,OL1=0 */
  clrReg8Bits(GPTCTL1, 0xCCU);          
  /* GPTCTL2: EDG3B=0,EDG3A=0,EDG1B=0,EDG1A=0 */
  clrReg8Bits(GPTCTL2, 0xCCU);          
  /* GPTSCR2: TOI=0,??=0,PUPT=0,RDPT=0,TCRE=1,PR=0 */
  setReg8(GPTSCR2, 0x08U);              
  /* GPTFLG1: ??=0,??=0,??=0,??=0,CF3=0,CF2=0,CF1=1,CF0=0 */
  setReg8(GPTFLG1, 0x02U);              
  /* GPTIE: CI1=1 */
  setReg8Bits(GPTIE, 0x02U);            
  /* GPTC1: CCNT=0x06D5 */
  setReg16(GPTC1, 0x06D5U);            /* Store given value to the compare register */ 
  /* GPTC3: CCNT=0x06D5 */
  setReg16(GPTC3, 0x06D5U);            /* Store given value to the modulo register */ 
  setReg8Bit(GPTSCR1,GPTEN);           /* Run counter */
}

/*
** ===================================================================
**     Method      :  TI1_Interrupt (component TimerInt)
**
**     Description :
**         The method services the interrupt of the selected peripheral(s)
**         and eventually invokes event(s) of the component.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
__declspec(interrupt) void TI1_Interrupt(void)
{
  setReg8(GPTFLG1,0x02);               /* Reset interrupt request flag */
  TI1_OnInterrupt();                   /* Invoke user event */
}

/* END TI1. */

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