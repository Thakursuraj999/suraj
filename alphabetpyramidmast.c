/* OUTPUT
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

*/

// Triangle tip upward.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int x=1;
    for(int i=1;i<=n;i++){
        char n1 =65;
        for (int j = 1; j <=n-i; j++){
            printf("  ");
        }
        for (int j = 1; j <=i; j++){
            printf("%c ",n1);
            n1++;
        }
        for(int k=i-1;k>0;k--){
            printf("%c ",k+64);
        }
        x = x+2;
        printf("\n");
    }
    return 0;
}
