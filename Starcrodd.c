/* OUTPUT

*       *     
  *   *
    *
  *   *
*       *

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j++){
            if(j==i || j==(n+1-i )){

                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}