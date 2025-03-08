/* OUTPUT
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I

*/
// Triangle tip upward.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int x=1;
    for(int i=1;i<=n;i++){
        char ch = 65;
        for (int j = 1; j <=n-i; j++){
            printf("  ");
        }
        for (int j = 1; j <=x; j++){
            printf("%c ",ch);
            ch++;
        }
        x = x+2;
        printf("\n");
    }
    return 0;
}
