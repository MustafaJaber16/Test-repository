#include <p18F4520.h>
#include <delays.h>
#pragma config OSC=INTIO67 , LVP =OFF ,MCLRE=OFF ,WDT=OFF 

  unsigned int start ;
  
void main()
{  
	OSCCON = 0x70 ;
	ADCON1 = 0xF ;
	TRISA0 = 0 ;
	PORTAbits.RA0 =0;
	T1CON = 0x0 ;
	start = (0xFFFF +1 ) - 1000 ;
	TMR1IF = 0 ;
	T1CONbits.TMR1ON = 1 ;
	while(1)
	{
		while (TMR1IF == 0);
		PORTAbits.RA0=~PORTAbits.RA0 ;
		TMR1 = start ;
		TMR1IF = 0 ;
		
	}
} 
