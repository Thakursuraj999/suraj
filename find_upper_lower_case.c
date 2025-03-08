#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("Enter the charecter to check:");
    scanf("%c",&c);
    if(islower(c)){
        printf("This Character is in lowercase.");
    }else{
        printf("This charecter is in uppercase");
    }
return 0;
    

}