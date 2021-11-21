#include<stdio.h>
int leap(int);
int main()
{
	int year;
	printf("Enter year \n");
	scanf("%d",&year);
	int n=leap(year);
	if (n==1)
		printf("Leap year");
	else
		printf("Not Leap year");
	return 0;
}
int leap(int x)
{
	if(x%100==0)
	{
		if(x%400==0)
			return 1;
		else
			return 0;
	}
	else
	{
		if(x%4==0)
			return 1;
		else
			return 0;
	}
}
