#include <stdio.h>
int main()
{
	int a,b=0,c=0;
	printf("Enter a Integer");
	scanf("%d",&a);
	while(a!=0)
	{
		c=a%10;
		b=b+c;
		a=a/10;
	}
	printf("the required sum is :: %d",b);
}
