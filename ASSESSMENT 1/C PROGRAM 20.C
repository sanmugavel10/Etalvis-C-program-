#include<stdio.h>
int main(){
int number,firstDigit,secondDigit,finalValue,total,temp;
scanf("%d",&number);
temp=number;
firstDigit=temp%10;
temp=temp/10;
secondDigit=temp%10;
total=firstDigit+secondDigit;
finalValue=number-(total%2)*5;
printf("%d",finalValue);
}