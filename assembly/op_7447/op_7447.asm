;driving the 7447 decoder


.include "/home/apiiit-rkv/assembly/m328Pdef.inc"

	ldi r16, 0b00111100 ;identifying output pins 2,3,4,5
	out DDRD,r16		;declaring pins as output
	ldi r16,0b00011100	;loading the number 5 in binary
	out PORTD,r16		;writing output to pins 2,3,4,5
	
Start:
	rjmp Start
	

