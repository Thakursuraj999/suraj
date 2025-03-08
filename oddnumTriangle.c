/*OUTPUT 

1
1 3
1 3 5
1 3 5 7
1 3 5 7 9
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a= 1;
        for (int j = 1; j <=i;j=j+1)
        {
            printf("%d ",a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}