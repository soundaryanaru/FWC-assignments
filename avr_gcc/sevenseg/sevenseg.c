//Prints a decimal number 
//on the display
#include <avr/io.h>
 
int main (void)
{
	
	
 //set PD2-PD7 as output pins 0xFC=0b11111100 (binary)
  DDRD   |= 0xFC;
  //set PB0 as output pin
  DDRB    |= ((1 << DDB0));
 
  while (1) {
//turn PB0 off
    PORTB = ((1 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b11100000;
    	_delay_ms(500);
    PORTB = ((1 << PB0));
    PORTD = 0b00000000;
 }

  /* . */
  return 0;

}
