#include<stdio.h>
int main()
{
	int n,i,j,k,f1,f2;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if (a[i]<0)
			printf("Factorial can not be calculated for %d",a[i]);
		else
		{
			f1=1;
			if(a[i]!=0)
			{
				for(j=1;j<=a[i];j++)
					f1=f1*j;
			}
			f2=1;
			for(k=0;k<n;k++)
			{
				if(a[k]==f1)
				{
					f2=0;
					break;
				}
			}
			if(f2==0)
				printf("\nFactorial of %d is %d which is present.",a[i],f1);
			else
				printf("\nFactorial of %d is not present.",a[i]);
		}
	}
	return 0;
}

