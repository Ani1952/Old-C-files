#include <stdio.h>
int main()
{
	int num ,l=0;
	printf("Enter a number \n");
	scanf("%d",&num);
	int s=num;
	l=num%10;
	while(num>9)
	{
		num /=10;
	}
	int x=num+l;
	//printf("%d",num);
	printf("The sum of the first and last digit of %d is %d",s,x);
	return 0;
}
