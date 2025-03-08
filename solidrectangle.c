/* OUTPUT 

X X X X X 
X X X X X
X X X X X
X X X X X
X X X X X

*/ 
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of row: ");
    scanf("%d",&r);
    printf("Enter the number of column: ");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        for (int i = 0; i <c; i++)
        {
            printf("X ");
        }
        printf("\n");
    }
    return 0;
}