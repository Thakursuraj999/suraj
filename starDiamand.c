/* OUTPUT
  
  *
 ***
*****
 ***
  *
*/
// Triangle tip upward.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int x=1, c=1, y = n-2, a=(n+1)/2;
    for(int i =1;i<=a;i++){
        for (int j = 1; j <=a-i; j++){
            printf(" ");
        }
        for (int j = 1; j <=x; j++){
            printf("*");
        }
        x = x+2;
        printf("\n");  
    }
    for(int l = a+1;l<=n;l++){
        for(int m=1;m<=c;m++){
            printf(" ");
        }
        for(int m=1;m<=y;m++){
            printf("*");
        }
        y = y-2;
        c++;
        printf("\n");
    }
    return 0;
}
