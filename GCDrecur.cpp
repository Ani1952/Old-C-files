#include<stdio.h>
int GCD(int, int);
int main()
{
	int a, b;
	printf("Enter two numbers \n");
	scanf("%d,%d",&a,&b);
	int gcd=GCD(a,b);
	printf("The GCD of %d and %d are \n",a,b);
	printf("%d",gcd);
	return 0;
}
int GCD(int n1,int n2)
{
	if(n1!=0)
		return GCD(n2,n1% n2);
	else
		return(n1);
}
