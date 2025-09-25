/*
Name: Mary Wanjiru Kariuki
Reg No: CT100/G/25276/24
Description: Programme to commpute the volume and surface area of a of a cylinder
*/
#include<stdio.h>
//main function
int main(){
	float pi=3.142;
	float radius, height, surface_area, volume;

	printf(" enter radius of the cylinder:");
	scanf("%f", &radius);
	
	printf("enter the height of the cylinder:");
	scanf("%f",&height);
	
	surface_area= 2 * pi * radius * radius + 2 * pi * radius * height;
	volume=  pi * radius * radius * height;
	
	printf("\nsurface_area of the cylinder. %3f",surface_area);
	printf("\nvolume of the cylinder.%4sf", volume);		
	
	return 0;
	
}
