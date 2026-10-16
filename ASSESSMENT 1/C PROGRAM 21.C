#include <stdio.h>
int main(){
int number,temp,firstDigit,secondDigit,finalValue;
scanf("%d",&number);
temp=number;
firstDigit=temp%10;
temp=temp/10;
secondDigit=temp%10;
finalValue=number-(firstDigit%2 * secondDigit%2)*5;
printf("%d",finalValue);
}