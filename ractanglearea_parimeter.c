#include<stdio.h>
int main(){
    float l, b, area, perimeter;
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("Enter the bredth: ");
    scanf("%f",&b);
    area = l * b;
    perimeter = 2 * (l + b);
    if(area > perimeter){
        printf("Area is greater then perimeter");
    }
    if (area < perimeter){
        printf("Area is smaller then perimeter");
    }
    if(area == perimeter){
        printf("Area is equal to radius");
    }
    return 0;
} 