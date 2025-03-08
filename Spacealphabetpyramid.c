/* OUTPUT 

A B C D E F G H I 
A B C D   F G H I
A B C       G H I
A B           H I
A               I

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    char x=65;
    for(int m=1;m<=n*2-1;m++){
        printf("%c ",x);
        x++;
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        char y=65;
        for(int j=1;j<=nst;j++){
        printf("%c ",y);
        y++;
        }
        for(int k=1;k<=nsp;k++){
        printf("  ");
        y++;
        }
        for(int j=1;j<=nst;j++){
            printf("%c ",y);
            y++;
        }
        nst --;
        nsp +=2;
        printf("\n");
    }
    return 0;
}