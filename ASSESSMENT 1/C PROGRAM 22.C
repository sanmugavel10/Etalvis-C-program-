#include <stdio.h>

int main(){
int number, temp, total = 0, finalValue = 11, remainder;
 scanf("%d", &number);
 temp = number;

 while (finalValue > 10){
 while (temp != 0){
    remainder = temp % 10;
     total = total + remainder;
    temp = temp / 10;
        }
  if (total < 10){
 printf("%d\number", total);
      finalValue = total;
        }
 else {
  temp = total;
 total = 0;
 }
 }
}