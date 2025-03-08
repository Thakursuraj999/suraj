#include<stdio.h>
int main(){
	int l, b, area, perimeter;
	printf("Enter length:");
	scanf("%d",&l);
	printf("\nEnter bredth:");
	scanf("%d",&b);
	area = (l * b);
	perimeter = 2*(l+b);
	printf("area = %d \nperimeter = %d",area,perimeter);
	return 0;
}