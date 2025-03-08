/* OUTPUT

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4 

*/


#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int x=(n+1)/2;
    int min=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=i;
            if(i>x) a=n-i+1;
            int b=j;
            if(j>x) b=n-j+1;
            if(a<b){
                min = a;
            }
            else{
                min=b;
            }
            printf("%d ",x+1-min);
        }
        printf("\n");
    }
    return 0;
}

