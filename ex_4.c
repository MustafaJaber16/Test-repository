#include <p18F4520.h>
#include <delays.h>
#pragma config OSC=INTIO67 , LVP =OFF ,MCLRE=OFF ,WDT=OFF 
void main()
{
	OSCCON = 0x70 ;
	ADCON1 = 0xF ;
	TRISA = 0 ;
	
	while (1)
	{
		PORTA = PORTA++ ;
		Delay100TCYx(1) ;
	}
	
	// This is comment from Ahmad
}
