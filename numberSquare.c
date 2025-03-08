/* OUTPUT

1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/

#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of row: ");
    scanf("%d",&r);
    printf("Enter the number of column: ");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        for (int j = 1; j <=c; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}



