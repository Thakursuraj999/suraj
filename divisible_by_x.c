#include<stdio.h>
int main(){
int n,x;
printf("Enter the number to check: ");
scanf("%d",&n);
printf("Enter the number X: ");
scanf("%d",&x);
if(n % x == 0){
printf("The number %d is divisible by %d",n,x);
}
else{
printf("The number %d is not divisible by %d",n,x);
}return 0;
}
