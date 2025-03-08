#include<stdio.h>
void main(){
	float f,c;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f",&f);
	c = (f-32.0)*(5.0/9);
	printf("%.2f f is %.2f in c",f,c);
}
	