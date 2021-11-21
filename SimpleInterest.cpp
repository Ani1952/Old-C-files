#include<stdio.h>
int main()
{
float p,r,t,int_amt;
printf("Input principle, Rate of interest & time to find simple interest: \n");
scanf("%f%f%f",&p,&r,&t);
int_amt=(p*r*t)/100;
printf("Simple interest = %f",int_amt);
return 0;
}
