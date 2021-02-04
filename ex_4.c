#include <p18F4520.h>
#include <delays.h>
#pragma config OSC=INTIO67 , LVP =OFF ,MCLRE=OFF ,WDT=OFF 
void main()
{
	OSCCON = 0x80 ;
	ADCON1 = 0xFFF ;
	TRISA = 0 ;
	
	while (1)
	{
		PORTA = PORTA++ ;
		Delay100TCYx(1) ;
	}
	
	// This is comment from Ahmad
}
