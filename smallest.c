// youngest of three 

#include<stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter the  age of Ram: ");scanf("%d",& ram);
    printf("Enter the  age of Shyam: ");scanf("%d",&shyam);
    printf("Enter the  age of Ajay: ");scanf("%d",&ajay);
    if(ram < shyam &&  ram < ajay){printf("Ram is youngest of three.");}
    if(ram > shyam && shyam < ajay){printf("Shyam is youngest of three.");}
    if(ajay < shyam && ram > ajay){printf("Ajay is youngest of three.");}
    return 0;
}










