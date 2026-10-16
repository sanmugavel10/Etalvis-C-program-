#include<stdio.h>
int main(){
int number,result,total=0,temp,remainder;
scanf("%d",&number);
temp=number;
remainder=temp%10;
result=number/10;
total=(1*10)+remainder;
printf("%d",total);}