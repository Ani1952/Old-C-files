#include<stdio.h>  
#include <math.h>
     int main()    
     {
     	printf("Enter the length and breadth of the rectangle \n");
     	int l,b;
     	scanf("%d,%d",&l,&b);
     	int a,p;
     	float d;
     	a=l*b;
     	p=2*(l+b);
     	d=sqrt(l*l+b*b);
     	printf(" The area, Perimeter And Diagonal are respectively \n");
     	printf("%d,%d,%f",a,p,d);
     	return 0;
}
