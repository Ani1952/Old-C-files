#include<stdio.h>

long long convert(int);
int main()
{
	int n;
	printf("Enter a decimal number \n");
	scanf("%d",&n);
	printf("%d in decimal = %lld in binary", n, convert(n));
	return 0;
}

long long convert(int n)
{
	if (n==0)
		return 0;
	else
		return(n%2+10*convert(n/2));
}
