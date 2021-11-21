#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);//get input from user for rows
    for(i=1; i<=rows; i++){
        for(j=i; j<rows; j++){
            printf(" ");//print space for triangle
        }
        for(j=1; j<=i; j++){
            if(i==rows || j==1 || j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");//move to next line for iterate
    }
    
    return 0;
}
