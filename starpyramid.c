// /* OUTPUT

//     *
//    ***
//   *****
//  *******
// *********


// Triangle tip upward.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int x=1;
    for(int i=1;i<=n;i++){
        for (int j = 1; j <=n-i; j++){
            printf(" ");
        }
        for (int j = 1; j <=x; j++){
            printf("*");
        }
        x = x+2;
        printf("\n");
    }
    return 0;
}


// /*    *
//      * *
//     *   *
//    *     *
//   *       *
//  *         *
// * * * * * * * 
// */


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int x=1;
//     for(int i=1;i<=n;i++){
//         for (int j = 1; j <=n-i+1; j++){
//             printf(" ");
//         }
//         for (int j = 1; j <=1; j++){
//             printf("*");
//         }
//         for (int j = 1; j <=x-1; j++){
//             printf(" ");
//         }
//          for (int j = 1; j <=1; j++){
//             printf("*");
//         }
//         x = x+2;
//         printf("\n");
        
//     }for(int k=1;k<=n+2;k++){
//         printf("* ");
//     }
//     return 0;
// }





// #include<stdbool.h>
// #include<stdio.h>
// int main(){
//     int c; bool l;
//     printf("Enter The items you buy: ");
//     scanf("%d",&l);
//     printf("Are you logged in: ");
//     scanf("%d",&c);
//     int checkout = (c > 0) && l;
//     checkout ? printf("Valid for checkout."):printf("Invalid for checkout.");
//     return 0;
// }















