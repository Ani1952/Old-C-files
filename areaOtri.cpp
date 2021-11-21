#include<stdio.h> 
#include <math.h> 
     int main()
     {
     	printf("enter the three sides of the triangle");
     	float a,b,c;
     	scanf("%f,%f,%f",a,b,c);
     	float s,p;
     	s= (a+b+c)/2;
     	p=sqrt((s*(s- a)*(s-b)*(s-c)));
     	printf("The Area of the triangle is \n");
     	printf("%f",p);
     	return 0;
	 }
