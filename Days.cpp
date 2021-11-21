#include <stdio.h> 
int main()
{
    int d, y, w;

    printf("Enter days"); 
     scanf("%d",&d);
    // Converts days to years, weeks and days
    y = d/365; 
    w = (d % 365)/7;
    d = d- ((y*365) + (w*7));

    printf("Years: %d\n", y);
    printf("Weeks: %d\n", w);
    printf("Days: %d \n", d);

    return 0;
}
