#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h>
int main (void)
{

 bool U=0,V=0,W=0,f=0;
 DDRB =  0b00100000;  //  8,9,10,11 as inputs 
 DDRD =  0b11111000;
 PORTD = 0b00000100;   // 2 as output
 

while(1)
{  

U= (PIND & (1 << PIND2)) == (1 << PIND0);
V= (PIND & (1 << PIND3)) == (1 << PIND1);
W=(PIND & (1 << PIND4)) == (1 << PIND2);
f=(U&&V)||(U&&!W);
PORTD |= (f<< 2);
}
return 0;
}
