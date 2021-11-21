#include<stdio.h>

int convert(long long);
int main()
{
	long long n;
	printf("Enter a binary number \n");
	scanf("%lld",&n);
	printf("%lld in binary = %d in decimal", n, convert(n));
	return 0;
}

int convert(long long n)
{
	if (n==0)
		return 0;
	else
		return(n%10+2*convert(n/10));
}
