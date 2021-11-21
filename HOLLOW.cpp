#include <stdio.h>

void up(int);
void down(int);

void down(int n){
	int i, j;
        for (i = n - 1; i >= 0; i--)
        {
           
            for (j = n - 1; j > i; j--)
            {
                printf(" ");
            }
		
			printf("*");
			
			for (j = 1; j < (i * 2); j++)
                printf(" ");
 
            if (i >= 1)
                printf("*");
            printf("\n");
        }		
}

void up(int n){
	 int i, j, k = 0;
        for (i = n - 1; i >= 0; i--)
        {
            
            for (j = n - 1; j > k; j--)
            {
                printf(" ");
            }
 
            
            printf("*");
 
            
            for (j = 1; j < (k * 2); j++)
                printf(" ");
 
            if (i < n - 1)
                printf("*");
            printf("\n");
            k++;
        }
}

int main()
{
	int n=8;
	up(n);
	down(n);
}
