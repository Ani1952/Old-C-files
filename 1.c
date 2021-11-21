#include <stdio.h>
#include<math.h>
struct Time
{
  int hour;
  int minute;
  int second;
} a,b;

int main()
{ //hour 
   printf("Enter the value of 1st and 2nd hour values:: \n");
   scanf("%d %d", &a.hour, &b.hour);
   printf("SUM OF HOUR:: %d\n",a.hour+b.hour);
   printf("DIFF OF HOUR:: %d\n",abs(a.hour-b.hour));
   //minute
   printf("Enter the value of 1st and 2nd minute values:: \n");
   scanf("%d %d", &a.minute, &b.minute);
   printf("SUM OF MINUTE:: %d\n",a.minute+b.minute);
   printf("DIFF OF MINUTE:: %d\n",abs(a.minute-b.minute));
  //seconds
   printf("Enter the value of 1st and 2nd second values:: \n");
   scanf("%d %d", &a.second, &b.second);
   printf("SUM OF SECOND:: %d\n",a.second+b.second);
   printf(" OF SECOND:: %d\n",abs(a.second-b.second));
  
  
  return 0;
}
