/* OUTPUT 

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/
// Triangle tip upward.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int x=1;
    for(int i=1;i<=n;i++){
        int n1 = 1;
        for (int j = 1; j <=n-i; j++){
            printf("  ");
        }
        for (int j = 1; j <=i; j++){
            printf("%d ",n1);
            n1++;
        }
        for(int k=i-1;k>0;k--){
            printf("%d ",k);
        }
        x = x+2;
        printf("\n");
    }
    return 0;
}
