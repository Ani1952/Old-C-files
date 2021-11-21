#include <stdio.h>
main()
{
 int a,b,c,d;
 printf("Enter a three digit number ");
 scanf("%d",&a);
 b=a/100;
 c=a%10;
 d=a%100/10;
 if(b*b*b+c*c*c+d*d*d==a)
 printf("%d is an armstrong number",a);
 else
 printf("%d is not an armstrong number",a);
}
