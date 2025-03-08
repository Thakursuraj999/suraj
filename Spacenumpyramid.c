/* OUTPUT

1 2 3 4 5 6 7 8 9 
1 2 3 4   6 7 8 9 
1 2 3       7 8 9 
1 2           8 9 
1               9 

*/


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    int x=1;
    for(int m=1;m<=n*2-1;m++){
        printf("%d ",x);
        x++;
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        int y=1;
        for(int j=1;j<=nst;j++){
        printf("%d ",y);
        y++;
        }
        for(int k=1;k<=nsp;k++){
        printf("  ");
        y++;
        }
        for(int j=1;j<=nst;j++){
            printf("%d ",y);
            y++;
        }
        nst --;
        nsp +=2;
        printf("\n");
    }
    return 0;
}