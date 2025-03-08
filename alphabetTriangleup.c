/* OUTPUT

A
A B
A B C
A B C D
A B C D E

*/


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char ch = 65;
        for(int j=1;j<=i;j=j+1){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}