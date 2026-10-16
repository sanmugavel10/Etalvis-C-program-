#include<stdio.h>
int main(){
int number,result,total=0;
scanf("%d",&number);
while(number!=0){
    result=number%10;
    total=total*10+result;
    number/=10;}
    
    printf("%d",total);
    
}