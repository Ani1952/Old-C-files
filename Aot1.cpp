#include <stdio.h>

int main()
{
	float c,f;
	printf("Enter the temperature in celcius \n");
	scanf("%f",&c);
	f=((c/5)*9)+32;
	printf("%f degree celcius is %f degree farhenhiet",c,f);
	return 0;
}
