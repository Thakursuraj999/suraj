/*OUTPUT

* * * * * 
* * * *
* * *
* *
*

*/
// // Triangle tip upward.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for (int j = 1; j <=i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// // Triangle tip downward.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for (int j = 1; j <= i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }




// Triangle tip downward method 2.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j = 1; j <=n+1-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


