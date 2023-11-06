/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LED1.c
**     Project     : leds_ciclo
**     Processor   : MCF52233CAF60
**     Component   : BitIO
**     Version     : Component 02.086, Driver 01.02, CPU db: 3.00.000
**     Compiler    : CodeWarrior MCF C Compiler
**     Date/Time   : 2023-05-29, 16:57, # CodeGen: 4
**     Abstract    :
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
**     Settings    :
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       8             |  DTIN0_DTOUT0_PWM0_PTC0
**             ----------------------------------------------------
**
**         Port name                   : PORTTC
**
**         Bit number (in port)        : 0
**         Bit mask of the port        : 0x0001
**
**         Initial direction           : Output (direction can be changed)
**         Safe mode                   : no
**         Initial output value        : 0
**         Initial pull option         : up
**
**         Port data register          : PORTTC    [0x0010000F]
**         Port control register       : DDRTC     [0x00100027]
**
**         Optimization for            : speed
**     Contents    :
**         SetDir - void LED1_SetDir(bool Dir);
**         GetVal - bool LED1_GetVal(void);
**         PutVal - void LED1_PutVal(bool Val);
**         ClrVal - void LED1_ClrVal(void);
**         SetVal - void LED1_SetVal(void);
**         NegVal - void LED1_NegVal(void);
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
** @file LED1.c
** @version 01.02
** @brief
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
*/         
/*!
**  @addtogroup LED1_module LED1 module documentation
**  @{
*/         

/* MODULE LED1. */

#include "LED1.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


/*
** ===================================================================
**     Method      :  LED1_GetVal (component BitIO)
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pin and returns it
**           b) direction = Output : returns the last written value
**     Parameters  : None
**     Returns     :
**         ---             - Input value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)

** ===================================================================
*/
bool LED1_GetVal(void)
{
  if ((getReg8(DDRTC) & 0x01U)) {
    return (bool)((getReg8(PORTTC) & 0x01U)); /* Return port output data */
  } else { /* !(getReg8(DDRTC) & 0x01U) */
    return (bool)((getReg8(SETTC) & 0x01U)); /* Return port input data */
  } /* !(getReg8(DDRTC) & 0x01U) */
}

/*
** ===================================================================
**     Method      :  LED1_PutVal (component BitIO)
**     Description :
**         This method writes the new output value.
**         Note: If direction is set to input the method code may not
**               work properly.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val             - Output value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)
**     Returns     : Nothing
** ===================================================================
*/
void LED1_PutVal(bool Val)
{
  if (Val) {
    setReg8(SETTC, 0x01U);             /* SETTC0=0x01U */
  } else { /* !Val */
    setReg8(CLRTC, 0xFEU);             /* CLRTC0=0x00U */
  } /* !Val */
}

/*
** ===================================================================
**     Method      :  LED1_ClrVal (component BitIO)
**     Description :
**         This method clears (sets to zero) the output value.
**         Note: If direction is set to input the method code may not
**               work properly.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED1_ClrVal(void)

**  This method is implemented as a macro. See LED1.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED1_SetVal (component BitIO)
**     Description :
**         This method sets (sets to one) the output value.
**         Note: If direction is set to input the method code may not
**               work properly.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED1_SetVal(void)

**  This method is implemented as a macro. See LED1.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED1_NegVal (component BitIO)
**     Description :
**         This method negates (inverts) the output value.
**         Note: If direction is set to input the method code may not
**               work properly.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED1_NegVal(void)

**  This method is implemented as a macro. See LED1.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED1_SetDir (component BitIO)
**     Description :
**         This method sets direction of the component.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Dir        - Direction to set (FALSE or TRUE)
**                      FALSE = Input, TRUE = Output
**     Returns     : Nothing
** ===================================================================
*/
void LED1_SetDir(bool Dir)
{
  if (Dir) {
    setReg8Bits(DDRTC, 0x01U);         /* DDRTC0=0x01U */
  } else { /* !Dir */
    clrReg8Bits(DDRTC, 0x01U);         /* DDRTC0=0x00U */
  } /* !Dir */
}


/* END LED1. */
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