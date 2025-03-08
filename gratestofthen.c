
// Gretest of three numbers

// #include<stdio.h>
// int main()
// {
//     int n1, n2, n3;
//     printf("Enter the  first number: ");scanf("%d",&n1);
//     printf("Enter the  second number: ");scanf("%d",&n2);
//     printf("Enter the  third number: ");scanf("%d",&n3);
//     if(n1 > n2 && n1 > n3){printf("%d",n1);printf(" is greater then all.");}
//     if(n1 < n2 && n2 > n3){printf("%d",n2);printf(" is greater then all.");}
//     if(n3 > n2 && n1 < n3){printf("%d",n3);printf(" is greater then all.");}
//     return 0;
// }


// Gratest of four number

#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the  1st number: ");scanf("%d",&a);
    printf("Enter the  2nd number: ");scanf("%d",&b);
    printf("Enter the  3rd number: ");scanf("%d",&c);
    printf("Enter the  4th number: ");scanf("%d",&d);
    if(a > b && a > c && a > d){printf("%d",a);printf(" is greater then all.");}
    if(b > a && b > c && b > d){printf("%d",b);printf(" is greater then all.");}
    if(c > a && c > b && c > d){printf("%d",c);printf(" is greater then all.");}
    if(c > a && d > b && d > c){printf("%d",d);printf(" is greater then all.");}
    return 0;
}