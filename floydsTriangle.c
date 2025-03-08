/* OUTPUT 
 1
 3  5
 7  9 11
13 15 17 19
21 23 25 27 29
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(x<10){
                printf(" %d ",x);
            }
            else{
                printf("%d ",x);
            }
            x=x+2;
        }
        printf("\n");
    }
    return 0;
}