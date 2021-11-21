#include<stdio.h>  
     int main()    
     {
   int a,b=0; 
   printf(" Enter a number \n");
   scanf("%ld", &a);
   if(a<0)
   {
   	    b=a+(a*(-2));
   }
   else if(a>0)
   {
   		b=a-(a*(2));
   }
   else
   {
   printf("ZERO");
	 }
	 printf(" THE REVESED SIGN VALUE IS \n");
	 printf("%d",b);
	 return 0;
}
