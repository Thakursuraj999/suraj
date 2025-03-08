
/* OUTPUT

1 2 3 4 5 4 3 2 1 
1 2 3 4   4 3 2 1
1 2 3       3 2 1
1 2           2 1
1               1

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    int x=1;
    int q=n-1;
    for(int m=1;m<=n*2-1;m++){
        if(m<=n){
        printf("%d ",x);
        x++;
        }
        else{
            printf("%d ",q);
            q--;
        }
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        int y=1;
        int z=n*2-1;
        for(int j=1;j<=nst;j++){
        printf("%d ",y);
        y++;
        z--;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
            z--;
        }
        for(int j=1;j<=nst;j++){
            printf("%d ",z);
            z--;
        }
        nst --;
        nsp +=2;
        printf("\n");
    }
    return 0;
}