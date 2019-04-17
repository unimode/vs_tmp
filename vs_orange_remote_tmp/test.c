#include <stdio.h>
#include <wiringPi.h>

#define PIN_LED 7

int main(int argc, char const *argv[])
{
	int a = 1;
	int b = 2;
	int c = 15;

	a++; 
	b++;
	c = a + b;

	wiringPiSetup();
	pinMode(PIN_LED, OUTPUT);
	
	while(1){
		digitalWrite(PIN_LED, LOW);
		delay(200);
		digitalWrite(PIN_LED, HIGH);
		delay(200);
	}

	printf("Test7\n");
	return 0;
}