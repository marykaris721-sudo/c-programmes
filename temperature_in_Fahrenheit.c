/*
Name: Mary Wanjiru Kariuki
Reg No: CT100/G/25276/24
Description:convertion of temperature from Fahrenheit to  celcius.
*/

#include <stdio.h>

float convert_to_celcius(float F)
{
	float C;
	C=(F-32) * 5/9;
	return C;
}
int main()
{
	float Fahrenheit;
	float Celcius;
	
	printf ("Enter temperature in Fahrenheit:" );
	scanf("%f", &Fahrenheit);
	
	Celcius= convert_to_celcius(Fahrenheit);
	printf("Temperature in Celcius: %.2f\n",Celcius);
	
	return 0;
	
}