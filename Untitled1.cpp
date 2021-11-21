#include <stdio.h>
int main()
{
	float a;int b;
	scanf("%f,%d",&a,&b);
	float x=(a*a-0.0103)/(4*b*50);
	printf("%f",x);
}
