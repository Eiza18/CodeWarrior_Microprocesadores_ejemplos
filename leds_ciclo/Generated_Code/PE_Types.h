/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PE_Types.h
**     Project     : leds_ciclo
**     Processor   : MCF52233CAF60
**     Component   : PE_Types
**     Version     : Driver 01.01
**     Compiler    : CodeWarrior MCF C Compiler
**     Date/Time   : 2023-05-29, 16:43, # CodeGen: 1
**     Abstract    :
**         PE_Types.h - contains definitions of basic types,
**         register access macros and hardware specific macros
**         which can be used in user application.
**     Settings    :
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
** @file PE_Types.h
** @version 01.01
** @brief
**         PE_Types.h - contains definitions of basic types,
**         register access macros and hardware specific macros
**         which can be used in user application.
*/         
/*!
**  @addtogroup PE_Types_module PE_Types module documentation
**  @{
*/         

#ifndef __PE_Types_H
#define __PE_Types_H

/*lint -save -e960 Disable MISRA rule 98 checking */
/* Standard ANSI C types */
#include <stdint.h>
#include <ewl_misra_types.h>

#ifndef FALSE
  #define  FALSE  0x00                 /* Boolean value FALSE. FALSE is defined always as a zero value. */
#endif
#ifndef TRUE
  #define  TRUE   0x01                 /* Boolean value TRUE. TRUE is defined always as a non zero value. */
#endif

#ifndef NULL
  #define  NULL   0x00
#endif

#if ((!_MSL_LONGLONG) && (!_EWL_LONGLONG))
typedef unsigned long long      uint64_t;
#endif
/* PE types definition */
#ifndef __cplusplus
typedef unsigned char           bool;
#endif
typedef unsigned char           byte;
typedef unsigned short          word;
typedef unsigned long           dword;
typedef unsigned long long      dlong;
typedef unsigned char           TPE_ErrCode;

/* Other basic data types */
typedef signed char             int8;
typedef signed short int        int16;
typedef signed long int         int32;

typedef unsigned char           uint8;
typedef unsigned short int      uint16;
typedef unsigned long int       uint32;

#ifndef TPE_Float
typedef float TPE_Float;
#endif

/**********************************************************/
/* Uniform multiplatform 8-bits peripheral access macros */
/**********************************************************/

#define setReg8Bit(RegName, BitName)                            (RegName |= (byte)(RegName##_##BitName##_##BITMASK))
#define clrReg8Bit(RegName, BitName)                            (RegName &= (byte)(~RegName##_##BitName##_##BITMASK))
#define invertReg8Bit(RegName, BitName)                         (RegName ^= (byte)(RegName##_##BitName##_##BITMASK))
#define testReg8Bit(RegName, BitName)                           (RegName & RegName##_##BitName##_##BITMASK)

/* Whole peripheral register access macros */
#define setReg8(RegName, val)                                   (RegName = (byte)(val))
#define getReg8(RegName)                                        (RegName)

/* Bits peripheral register access macros */
#define testReg8Bits(RegName, GetMask)                          (RegName & (byte)(GetMask))
#define clrReg8Bits(RegName, ClrMask)                           (RegName &= (byte)(~(byte)(ClrMask)))
#define setReg8Bits(RegName, SetMask)                           (RegName |= (byte)(SetMask))
#define invertReg8Bits(RegName, InvMask)                        (RegName ^= (byte)(InvMask))
#define clrSetReg8Bits(RegName, ClrMask, SetMask)               (RegName = (byte)((RegName & (~(byte)(ClrMask))) | (byte)(SetMask)))
#define seqClrSetReg8Bits(RegName, BitsMask, BitsVal)           ( RegName &= (byte)(~((~(byte)(BitsVal)) & (byte)(BitsMask))),\
                                                                 RegName |= (byte)((byte)(BitsVal) & (byte)(BitsMask)) )
#define seqSetClrReg8Bits(RegName, BitsMask, BitsVal)           ( RegName |= (byte)((byte)(BitsVal) & (byte)(BitsMask)),\
                                                                 RegName &= (byte)(~(~(byte)(BitsVal) & (byte)(BitsMask))) )
#define seqResetSetReg8Bits(RegName, BitsMask, BitsVal)         ( RegName &= (byte)(~(byte)(BitsMask)),\
                                                                 RegName |= (byte)((byte)(BitsVal) & (byte)(BitsMask)) )
#define clrReg8BitsByOne(RegName, ClrMask, BitsMask)            (RegName &= (byte)((byte)(ClrMask) & (byte)(BitsMask)))

/* Bit group peripheral register access macros */
#define testReg8BitGroup(RegName, GroupName)                    (RegName & RegName##_##GroupName##_##GRPMASK)
#define getReg8BitGroupVal(RegName, GroupName)                  ((RegName & RegName##_##GroupName##_##GRPMASK) >> RegName##_##GroupName##_##GRPPOS)
#define setReg8BitGroupVal(RegName, GroupName, GroupVal)        (RegName = (byte)((RegName & ~RegName##_##GroupName##_##GRPMASK) | ((byte)(GroupVal) << RegName##_##GroupName##_##GRPPOS)))
#define seqClrSetReg8BitGroupVal(RegName,GroupName,GroupVal)    ( RegName &= (byte)(~(~((byte)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK)),\
                                                                 RegName |= (byte)(((byte)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK) )
#define seqSetClrReg8BitGroupVal(RegName,GroupName,GroupVal)    ( RegName |= (byte)(((byte)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK),\
                                                                 RegName &= (byte)(~(~((byte)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK)) )
#define seqResetSetReg8BitGroupVal(RegName,GroupName,GroupVal)  ( RegName &= (byte)(~RegName##_##GroupName##_##GRPMASK),\
                                                                 RegName |= (byte)(((byte)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK) )

/* Peripheral access macros based on the memory address */
#define periphMemWrite8(Address, Val)                           (*((volatile uint8_t *)(Address)) = (uint8_t)(Val))
#define periphMemRead8(Address)                                 (*((volatile uint8_t *)(Address)))
#define periphBitsClr8(Address, ClrMask)                        (*((volatile uint8_t *)(Address)) &= (uint8_t)(~(uint8_t)(ClrMask)))
#define periphBitsSet8(Address, SetMask)                        (*((volatile uint8_t *)(Address)) |= (uint8_t)(SetMask))
#define periphBitsTest8(Address, GetMask)                       (*((volatile uint8_t *)(Address)) & (uint8_t)(GetMask))


/**********************************************************/
/* Uniform multiplatform 16-bits peripheral access macros */
/**********************************************************/

#define setReg16Bit(RegName, BitName)                           (RegName |= (word)(RegName##_##BitName##_##BITMASK))
#define clrReg16Bit(RegName, BitName)                           (RegName &= (word)(~RegName##_##BitName##_##BITMASK))
#define invertReg16Bit(RegName, BitName)                        (RegName ^= (word)(RegName##_##BitName##_##BITMASK))
#define testReg16Bit(RegName, BitName)                          (RegName & RegName##_##BitName##_##BITMASK)

/* Whole peripheral register access macros */
#define setReg16(RegName, val)                                   (RegName = (word)(val))
#define getReg16(RegName)                                        (RegName)

/* Bits peripheral register access macros */
#define testReg16Bits(RegName, GetMask)                          (RegName & (word)(GetMask))
#define clrReg16Bits(RegName, ClrMask)                           (RegName &= (word)(~(word)(ClrMask)))
#define setReg16Bits(RegName, SetMask)                           (RegName |= (word)(SetMask))
#define invertReg16Bits(RegName, InvMask)                        (RegName ^= (word)(InvMask))
#define clrSetReg16Bits(RegName, ClrMask, SetMask)               (RegName = (word)((RegName & (word)(~(word)(ClrMask))) | (word)(SetMask)))
#define seqClrSetReg16Bits(RegName, BitsMask, BitsVal)           ( RegName &= (word)(~(word)(~(word)(BitsVal) & (word)(BitsMask))),\
                                                                 RegName |= (word)((word)(BitsVal) & (word)(BitsMask)) )
#define seqSetClrReg16Bits(RegName, BitsMask, BitsVal)           ( RegName |= (word)((word)(BitsVal) & (word)(BitsMask)),\
                                                                 RegName &= (word)(~(~(word)(BitsVal) & (word)(BitsMask))) )
#define seqResetSetReg16Bits(RegName, BitsMask, BitsVal)         ( RegName &= (word)(~(word)(BitsMask)),\
                                                                 RegName |= (word)((word)(BitsVal) & (word)(BitsMask)) )
#define clrReg16BitsByOne(RegName, ClrMask, BitsMask)            (RegName &= (word)((word)(ClrMask) & (word)(BitsMask)))

/* Bit group peripheral register access macros */
#define testReg16BitGroup(RegName, GroupName)                    (RegName & (word)(RegName##_##GroupName##_##GRPMASK))
#define getReg16BitGroupVal(RegName, GroupName)                  ((RegName & RegName##_##GroupName##_##GRPMASK) >> RegName##_##GroupName##_##GRPPOS)
#define setReg16BitGroupVal(RegName, GroupName, GroupVal)        (RegName = (word)((RegName & ~RegName##_##GroupName##_##GRPMASK) | ((word)(GroupVal) << RegName##_##GroupName##_##GRPPOS)))
#define seqClrSetReg16BitGroupVal(RegName,GroupName,GroupVal)    ( RegName &= (word)(~(~((word)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK)),\
                                                                 RegName |= (word)(((word)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK) )
#define seqSetClrReg16BitGroupVal(RegName,GroupName,GroupVal)    ( RegName |= (word)(((word)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK),\
                                                                 RegName &= (word)(~(~((word)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK)) )
#define seqResetSetReg16BitGroupVal(RegName,GroupName,GroupVal)  ( RegName &= (word)(~RegName##_##GroupName##_##GRPMASK),\
                                                                 RegName |= (word)(((word)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK) )

/* Peripheral access macros based on the memory address */
#define periphMemWrite16(Address, Val)                           (*((volatile uint16_t *)(Address)) = (uint16_t)(Val))
#define periphMemRead16(Address)                                 (*((volatile uint16_t *)(Address)))
#define periphBitsClr16(Address, ClrMask)                        (*((volatile uint16_t *)(Address)) &= (uint16_t)(~(uint16_t)(ClrMask)))
#define periphBitsSet16(Address, SetMask)                        (*((volatile uint16_t *)(Address)) |= (uint16_t)(SetMask))
#define periphBitsTest16(Address, GetMask)                       (*((volatile uint16_t *)(Address)) & (uint16_t)(GetMask))


/**********************************************************/
/* Uniform multiplatform 32-bits peripheral access macros */
/**********************************************************/

#define setReg32Bit(RegName, BitName)                           (RegName |= (dword)(RegName##_##BitName##_##BITMASK))
#define clrReg32Bit(RegName, BitName)                           (RegName &= (dword)(~RegName##_##BitName##_##BITMASK))
#define invertReg32Bit(RegName, BitName)                        (RegName ^= (dword)(RegName##_##BitName##_##BITMASK))
#define testReg32Bit(RegName, BitName)                          (RegName & RegName##_##BitName##_##BITMASK)

/* Whole peripheral register access macros */
#define setReg32(RegName, val)                                   (RegName = (dword)(val))
#define getReg32(RegName)                                        (RegName)

/* Bits peripheral register access macros */
#define testReg32Bits(RegName, GetMask)                          (RegName & (dword)(GetMask))
#define clrReg32Bits(RegName, ClrMask)                           (RegName &= (dword)(~(dword)(ClrMask)))
#define setReg32Bits(RegName, SetMask)                           (RegName |= (dword)(SetMask))
#define invertReg32Bits(RegName, InvMask)                        (RegName ^= (dword)(InvMask))
#define clrSetReg32Bits(RegName, ClrMask, SetMask)               (RegName = (dword)((RegName & (~(dword)(ClrMask))) | (dword)(SetMask)))
#define seqClrSetReg32Bits(RegName, BitsMask, BitsVal)           ( RegName &= (dword)(~(~(dword)(BitsVal) & (dword)(BitsMask))),\
                                                                 RegName |= (dword)((dword)(BitsVal) & (dword)(BitsMask)) )
#define seqSetClrReg32Bits(RegName, BitsMask, BitsVal)           ( RegName |= (dword)((dword)(BitsVal) & (dword)(BitsMask)),\
                                                                 RegName &= (dword)(~(~(dword)(BitsVal) & (dword)(BitsMask))) )
#define seqResetSetReg32Bits(RegName, BitsMask, BitsVal)         ( RegName &= (dword)(~(dword)(BitsMask)),\
                                                                 RegName |= (dword)((dword)(BitsVal) & (dword)(BitsMask)) )
#define clrReg32BitsByOne(RegName, ClrMask, BitsMask)            (RegName &= (dword)((dword)(ClrMask) & (dword)(BitsMask)))

/* Bit group peripheral register access macros */
#define testReg32BitGroup(RegName, GroupName)                    (RegName & RegName##_##GroupName##_##GRPMASK)
#define getReg32BitGroupVal(RegName, GroupName)                  ((RegName & RegName##_##GroupName##_##GRPMASK) >> RegName##_##GroupName##_##GRPPOS)
#define setReg32BitGroupVal(RegName, GroupName, GroupVal)        (RegName = (RegName & ~RegName##_##GroupName##_##GRPMASK) | ((dword)(GroupVal) << RegName##_##GroupName##_##GRPPOS))
#define seqClrSetReg32BitGroupVal(RegName,GroupName,GroupVal)    ( RegName &= (dword)(~(~((dword)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK)),\
                                                                 RegName |= (dword)(((dword)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK) )
#define seqSetClrReg32BitGroupVal(RegName,GroupName,GroupVal)    ( RegName |= (dword)(((dword)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK),\
                                                                 RegName &= (dword)(~(~((dword)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK)) )
#define seqResetSetReg32BitGroupVal(RegName,GroupName,GroupVal)  ( RegName &= (dword)(~RegName##_##GroupName##_##GRPMASK),\
                                                                 RegName |= (dword)(((dword)(GroupVal) << RegName##_##GroupName##_##GRPPOS) & RegName##_##GroupName##_##GRPMASK) )

/* Peripheral access macros based on the memory address */
#define periphMemWrite32(Address, Val)                           (*((volatile uint32_t *)(Address)) = (uint32_t)(Val))
#define periphMemRead32(Address)                                 (*((volatile uint32_t *)(Address)))
#define periphBitsClr32(Address, ClrMask)                        (*((volatile uint32_t *)(Address)) &= (uint32_t)(~(uint32_t)(ClrMask)))
#define periphBitsSet32(Address, SetMask)                        (*((volatile uint32_t *)(Address)) |= (uint32_t)(SetMask))
#define periphBitsTest32(Address, GetMask)                       (*((volatile uint32_t *)(Address)) & (uint32_t)(GetMask))


/* Enable the given interrupt level in the SR register */
#define __EI(level) \
 asm {\
   link A6, #-4\
   movem.l D0, (SP)\
   move.w  SR, D0\
   andi.l  #0x0000F8FF, D0\
   or.l    #((level & 7) << 8), D0\
   move.w  D0, SR\
   movem.l (SP), D0\
   unlk A6\
 }

/* Disable all interrupt levels in the SR register, only level 7 is allowed */
#define __DI() \
 asm {\
   link A6, #-4;\
   movem.l D0, (SP)\
   move.w  SR, D0\
   or.l    #0x00000700, D0\
   move.w  D0, SR\
   movem.l (SP), D0\
   unlk A6\
 }

#define SaveStatusReg() \
/*lint -save  -e765 -e505 -e522 -e960 -e54 Disable MISRA rule (23,53,54) checking. */\
 asm {\
   link A6, #-4\
   movem.l D0, (SP)\
   move.w SR, D0\
   move.w D0, SR_reg\
   ori.l #1792, D0\
   move.w D0, SR\
   movem.l (SP), D0\
   unlk A6\
 }                                     /* This macro is used by Processor Expert. It saves CCR register and disable global interrupts. */
/*lint -restore Enable MISRA rule (23,53,54) checking. */
#define RestoreStatusReg() \
/*lint -save  -e765 -e505 -e522 -e960 -e54 Disable MISRA rule (23,53,54) checking. */\
 asm {\
   link A6, #-4\
   movem.l D0, (SP)\
   move.w SR_reg, D0\
   move.w D0, SR\
   movem.l (SP), D0\
   unlk A6\
 }                                     /* This macro is used by Processor Expert. It restores CCR register saved in SaveStatusReg(). */ \
/*lint -restore Enable MISRA rule (23,53,54) checking. */

/* Save status register and disable interrupts */
#define EnterCritical() \
 {\
                              /*lint -save  -e960 -e54 Disable MISRA rule (54) checking. */\
   if (++SR_lock == 1) SaveStatusReg();\
                              /*lint -restore Enable MISRA rule (54) checking. */\
 }

/* Restore status register  */
#define ExitCritical() \
 {\
                              /*lint -save  -e960 -e54 Disable MISRA rule (54) checking. */\
   if (--SR_lock == 0) RestoreStatusReg();\
                              /*lint -restore Enable MISRA rule (54) checking. */\
 }

typedef struct {          /* Black&White image  */
  word width;             /* Image width  */
  word height;            /* Image height */
  byte *pixmap;           /* Image pixel bitmap */
  dword size;             /* Image size */
  byte *name;             /* Image name */
} TIMAGE;
typedef TIMAGE* PIMAGE ;  /* Pointer to an image */

/* Interrupt definition template */
#if !defined(PE_ISR)
  #define PE_ISR(ISR_name) __declspec(interrupt) void ISR_name(void)
#endif

#endif /* __PE_Types_H */

/*lint -restore */
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
