#include<stdbool.h>
#include<stdio.h>
int main(){
    int c; bool l;
    printf("Enter The items you buy: ");
    scanf("%d",&l);
    printf("Are you logged in: ");
    scanf("%d",&c);
    int checkout = (c > 0) && l;
    checkout ? printf("Valid for checkout."):printf("Invalid for checkout.");
    return 0;
}