#include <stdio.h>

int main(){
    int number,temp,remainder,total=0,secondRemainder,workingValue,finalValue;
    scanf("%d",&number);
    temp=number;
    remainder=temp%100;
    temp=temp/100;
    workingValue=temp;
    while(workingValue!=0){
        secondRemainder=workingValue%10;
        total=total*10+secondRemainder;
        workingValue/=10;
    }
    finalValue=total*100+remainder;
    printf("%d",finalValue);
}
    
    
    