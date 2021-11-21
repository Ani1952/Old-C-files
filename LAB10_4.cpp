#include <stdio.h>
int main()
{
	int x,r,c,a[25][25];
     printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
}
      printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

    
     for(int j=0;j<=r-1;j++)
          for(int i=0;i<=c-1;i++)
               if(a[j][i]==0)
                     x++;
     printf("Zeros present in Above Matrix: %d",x);
     return 0;
}
