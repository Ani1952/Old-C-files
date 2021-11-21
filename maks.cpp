#include<stdio.h>
int main()
{
	int x;
		printf("Enter the value of marks \n");
	    scanf("%d",&x);
	   if(x>90 && x<=100)
	   {
	   	printf("O");
	   }
	   else if(x>80 && x<=90)
	   {
	   	printf("E");
	   }
	   else if(x>70 && x<=80)
	   {
	   		printf("A");
	   }
	   else if(x>60 && x<=70)
	   {
	   	printf("B");
	   }
	    else if(x>50 && x<=60)
	    {
	    		printf("C");
		}
		 else if(x>=40 && x<=50)
		 {
		 		printf("D");
		 }
		 else if(x>=0 && x<40)
		 {
		 	printf("F");
		 }
		 else
		 {
		 	printf("invalid");
		 }
	}
