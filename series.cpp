#include <stdio.h>

int main(){

    int n,b=0,sum=0;

    printf("Enter the value of n: \n");
    scanf("%d",&n);
    while(b<=n){
        if(b%2!=0){
        sum=sum+b;
        }
        b++;
    }
    printf("%d",sum);
}
