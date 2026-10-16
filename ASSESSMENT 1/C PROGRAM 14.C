#include<stdio.h>
int main(){
int number,result,total=0,temp,answer,originalNumber;
scanf("%d",&number);
originalNumber=number;
result=number%100;
while(result!=0){
    temp=result%10;
    total=total*10+temp;
    result/=10;
}
originalNumber=originalNumber/100;
answer=originalNumber*100+total;
printf("%d",answer);
}