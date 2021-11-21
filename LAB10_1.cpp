#include<stdio.h>
int sum(int *,int );
int main()
{
	int i,s,arr[200],n;
	printf("enter the number of elements in the array");
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
	s=sum(arr,n);
	printf(" sum is =%d",s);
	
}
int sum(int *p,int n)
{
	int add=0;
	while(n>=0)
	{
		add=add+*p;
		p++;
		n--;
	}
	return add;
}
