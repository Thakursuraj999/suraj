/* OUTPUT

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/

#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of row: ");
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        char ch = 65;
        for (int j = 1; j <=r; j++)
        {   
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}