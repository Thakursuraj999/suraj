#include<stdio.h>
#include<math.h>
int main(){
    	float x1,x2,y1,y2,dist;
	printf("Enter X1 and Y1: ");
	scanf("%f %f",&x1,&y1);
	printf("Enter X2 and Y2: ");
	scanf("%f %f",&x2,&y2);
	dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%.2f",dist);
	return 0;
	}
 
