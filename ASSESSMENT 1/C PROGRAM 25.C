#include <stdio.h>

int main(){
    int number,temp,remainder,total=0;
    scanf("%d",&number);
    temp=number;
    while(temp!=0){
        remainder=temp%10;
        total=total+remainder;
        temp/=10;
    }
    printf("%d",total);
}