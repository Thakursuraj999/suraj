#include<stdio.h>
int main(){
    int r, s, a;
    printf("Enter the age Ram: ");scanf("%d",&r);
    printf("Enter the age Shyam: ");scanf("%d",&s);
    printf("Enter the age Ajay: ");scanf("%d",&a);
    if (r < s){
        if(r < a)printf("Ram is youngest =%d",r);
        else printf("Ajay is youngest =%d",a);
    }
    else{
        if(s < a) printf("Sayam is youngest =%d",s);
        else printf(" Ajay is youngest =%d",a);
    }
    return 0;
}