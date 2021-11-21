#include <stdio.h>

int main()
{
  int test[100], o,e,c,n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &test[c]);
    o=e=0;
    
    for (c = 0; c < n; c++)
  {
  	if(test[c]<e&& test[c]%2==0)
  	{
  	e=test[c];}
	  if(test[c]>o&& test[c]%2!=0)
  	{
  	o=test[c];}
  }
  printf("the smallest even and odd are respectively  %d,%d ",e,o);
}
