/* OUTPUT

A B C D E
A B C D
A B C
A B
A

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char ch = 65;
        for(int j=1;j<=n+1-i;j=j+1){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}