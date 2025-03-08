#include<stdio.h>
int main(){
int att, quizM;
scanf("%d %d",&att,&quizM);
int x = ((att > 80) || ((att>60) && (quizM > 60)));
printf("%d",x);
x ? printf("Eligible"):printf("Not Eligible");
return 0;
}