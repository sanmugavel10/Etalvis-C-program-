#include<stdio.h>
int main(){
int number,total;
scanf("%d",&number);
total=number-(number%2)*5;
printf("%d",total);}