#include<stdio.h>
int main(){
int number,total,temp,finalValue;
scanf("%d",&number);
temp=number;
temp=temp/10;
total=temp%10;
finalValue=number-(total%2)*5;
printf("%d",finalValue);
}