/*
 * nightRider.cpp
 * drive 5 LEDs in Night Rider pattern efficiently. 
 * Created: 1/20/2023 9:32:57 PM
 * Author : minol
 */ 

#include <avr/io.h> // include I0 definitions
#define F_CPU 16000000UL // define CPU clock speed for delay.h
#include <util/delay.h> // include definition of _delay ms( )

void moveRight();
void moveLeft();

int main(void)
{
	
	DDRC =0b00011111;
	
    while (1) 
    {

	moveLeft();
	moveRight();


    }
	
	
	

}

 void moveLeft(){
	PORTC=0b00000001;
	_delay_ms(50);	

	for(int i=1;i<6;i++){
		PORTC=PORTC*2;
		_delay_ms(50);
	}

}


 void moveRight(){
	 	PORTC=0b00001000;
	_delay_ms(50);

	 for(int i=0;i<3;i++){
		 PORTC=PORTC/2;
		 _delay_ms(50);
	 }
}