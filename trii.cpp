#include <stdio.h>
int main()
{
    int x, y,z;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &x, &y, &z);

    if(x==y && y==z) 
    {
        printf("Equilateral triangle.");
    } 
    else if(x==y || x==z|| y==z) 
    {
        printf("Isosceles triangle.");
    }
    else 
    {
        printf("Scalene triangle.");
    }

    return 0;
}
