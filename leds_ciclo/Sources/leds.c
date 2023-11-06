/*
 * leds.c
 *
 *  Created on: May 29, 2023
 *      Author: DES_RYZEN
 */

#include "dato.h"
#include "clock.h"
#include "led1.h"
#include "pinfoto.h"
#include "leds.h"

extern unsigned char banderaTimer;

void Transmision (unsigned char dato){
unsigned char lectura[8];
unsigned char y[]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
unsigned char g[]={0};
unsigned short int i;	
unsigned char b;
const unsigned short k=3000;
for(b=0; b<8; b++){
	if((dato&y[b])==y[b]){
		  lectura[b]=1;}
     else lectura[b]=0;	}
CLOCK_ClrVal();
for(b=0; b<8; b++) {//preguntar
	LED1_NegVal();
	if(lectura[b]==1)
		DATO_SetVal(); 
	else
		DATO_ClrVal();
	for(i=0; i<k/2; i++){__asm(nop);}
	CLOCK_SetVal();for(i=0; i<k; i++){__asm(nop);}
	DATO_ClrVal(); for(i=0; i<(k/2); i++){__asm(nop);}
	CLOCK_ClrVal();for(i=0; i<k; i++){__asm(nop);}}
pinfoto_SetVal();
for(i=0; i<k; i++){__asm(nop);}
pinfoto_ClrVal();
for(i=0; i<k; i++){__asm(nop);}
DATO_ClrVal();CLOCK_ClrVal();
}//fin--------------




void Transmision2(unsigned char datos){

unsigned char y[]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
//unsigned char g[]={0};
//unsigned short int i;	
//unsigned char b;
const unsigned short k=2,BY=8;
static unsigned char estado;
static unsigned char lectura[BY];
static unsigned char b;
static unsigned short int delay1;

if(banderaTimer){banderaTimer=0;
 switch(estado){
   case 1:b=0;estado++;break;
   case 2:if((datos&y[b])==y[b])
		       lectura[b]=1;
          else lectura[b]=0;
          if(++b>7) estado++;
          break;
   case 3:CLOCK_ClrVal();estado++;break;
   case 4:b=0;estado++;break;
   case 5:if(b>8){estado=14;break;}
	      if(lectura[b]==1)
			DATO_SetVal(); 
		  else
			DATO_ClrVal();
          estado++;delay1=0;break;
   case 6://if(++delay1>(k/2))
	          estado++;
          break;
   case 7:CLOCK_SetVal();delay1=0;estado++;break;
   case 8://if(++delay1>(k/2))
               estado++;
	      break;
   case 9:DATO_ClrVal();delay1=0;estado++;break;
   case 10://if(++delay1>(k/2))
	   	   	   estado++;
   	   	   	break;
   case 11:CLOCK_ClrVal();delay1=0;estado++;break;
   case 12://if(++delay1>(k/2))
	   	   	   estado++;
  	        break;
   case 13:estado=5;b++;break;
   case 14:pinfoto_SetVal();estado++;break;
   case 15://if(++delay1>(k))
   	   	   	    estado++;
      	   break;
   case 16:pinfoto_ClrVal();estado++;break;
   case 17://if(++delay1>(k))
 	   	    estado++;
	       break;
   case 18:DATO_ClrVal();CLOCK_ClrVal();
           estado=0;break;
   default:estado=1;break;}}//fin switch
 
 
}//fin--------------
