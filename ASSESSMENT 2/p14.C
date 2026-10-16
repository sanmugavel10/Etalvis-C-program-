#include <stdio.h>
int main(){
    int n,q,rem1,rem;
    scanf("%d",&n);
    q=n;
    rem=q%100;
    rem1=q/100;
    if(rem1 ==rem){
        printf("%d",1);
    }
    else
    printf("%d",0);
}