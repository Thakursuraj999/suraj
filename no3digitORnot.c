#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if(n >=100 && n <=999){
        printf("The number is three digits");
    }
    else{
        printf("The number is not three difits");
    }
    return 0;
}