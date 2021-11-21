#include<stdio.h>


int check(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return check(i+1,num);
    }
}
int main()
{
    int n,i;
    printf("Enter the range of values:");
    scanf("%d",&n);
    printf("Prime Numbers in the range are: \n");
    
   for(i=2;i<=n;i++)
        if(check(2,i)==0)
            printf("%d \n",i);
}
