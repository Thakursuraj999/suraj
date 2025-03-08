#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the 1st side: ");scanf("%d",&a);
    printf("Enter the 2st side: ");scanf("%d",&b);
    printf("Enter the 3st side: ");scanf("%d",&c);
    
    if( (a + b) > c && (a + c) > b && (c + b) > a){printf("Valid triangle");}
    else{printf("Invalid triangle");}
    return 0;
}