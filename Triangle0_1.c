/* OUTPUT

1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i %2==0 && j%2!=0)||(i %2!=0 && j%2==0)){
                printf("%d ",0);
            }
            else{
                printf("%d ",1);
            }
            
        }
        printf("\n");
    }
    return 0;
}