#include <p18F4520.h>
#include <delays.h>
#pragma config  OSC =INTIO67 , WDT =OFF , LVP=OFF ,MCLRE=OFF
void main ()
{
	OSCCON =0x70 ;
	ADCON1 = 0xF ;
	TRISA0 =0 ;
	while(1)
	{
	RA0 =1 ;
	Delay1KTCYx(1) ;
	RA0 =0 ;
	Delay1KTCYx(1) ;
   //while(1) {RA0=~RA0 ;Delay1KTCYx(1); }
}
}
