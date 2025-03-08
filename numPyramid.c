/* OUTPUT

        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

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
        for (int j = 1; j <=x; j++){
            printf("%d ",n1);
            n1++;
        }
        x = x+2;
        printf("\n");
    }
    return 0;
}
