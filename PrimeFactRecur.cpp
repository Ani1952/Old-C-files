#include<stdio.h>
void factorize(int,int);
int main()
{
	printf("Enter the number \n");
	int a;
	scanf("%d",&a);
	printf("The prime factor the entered number are\n");
	factorize(a,2);
	return 0;
}
void factorize(int n,int i)
{
	if(n>=i)
	{
		if(n%i==0)
		{
			printf("%d \n",i);
			n/=i;
		}
	
	else
		i++;
	factorize(n,i);
	}
}
