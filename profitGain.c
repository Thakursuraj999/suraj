#include<stdio.h>
int main(){
    float sp, cp,profit, loss;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter selling price: ");
    scanf("%f",&sp);
    if (sp > cp)
    {
        printf("Profit: ");
        profit = sp - cp;
        printf("%f",profit);
    }
    if(sp < cp){
        printf("Loss: ");
        loss = cp - sp;
        printf("%f",loss);
    }
    if(sp){
        printf("No profit no loss: 0");
    }

    return 0;
}