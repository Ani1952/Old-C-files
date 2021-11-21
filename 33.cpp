#include<stdio.h>
int main ()
{
	int a[100],n,i,j,f1,f2;
	printf("enter the number of elements in the array");
	scanf("%d",&n);
	printf("enter the values in your array");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{ 
	if (a[i]<0){
	
		printf("factorial cannot be calculated for%d\n",a[i]);
	}
	else
	{
	 f1=1;
	 if(a[i]!=0)
	 {
	 
	for(j=1;j<=a[i];j++)
	{
		f1=f1*j;
	}
}
	f2=1;
	for(j=0;j<n;j++)
	{
	
		{
		if(a[j]==f1)
		f2=0;
		break;
	    }
	}
	    if(f2==0)
		printf("the factorial value of %d is %d it is present in the array\n",a[i],f1);
		else 
		printf("the factorial value of %d is %d it is not present in the array\n",a[i],f1);
	
	}
	
	}
	return 0;
	
}
