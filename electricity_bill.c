#include<stdio.h>
int main(){
float unit,less_100 = 5,up_to200 = 6,gret_200 = 7,bill = 0;
printf("Enter the unit consumed: ");
scanf("%f",&unit);
if(unit < 0){
printf("Enter a valid input");
}
else if(unit<= 100){
bill = unit * less_100;
printf("The amount is %.2f",bill);
}
else if(unit >100 && unit <= 200){
bill = (((unit - 100)*up_to200) + (100 * less_100));
printf("The amount is %.2f",bill);
}
else{
bill = (((unit - 200)*gret_200) + (100 * up_to200) + (100 * less_100));
if(bill <= 5000){
printf("The amount is %.2f",bill);}
else{
bill = bill + ((bill*5.0)/100);
printf("The amount is %.2f",bill);
}
}
return 0;
}


