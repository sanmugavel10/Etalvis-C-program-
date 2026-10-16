#include <stdio.h>
int main(){
    int number,temp,total,middleDigit,remainder;
  scanf("%d", &number);
  temp = number;
  remainder=temp%10;
temp=temp/10;
middleDigit=temp%10;
total=(temp-middleDigit)*10+remainder;
printf("%d",total);
}