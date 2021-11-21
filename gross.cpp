#include <stdio.h>

int main()
{
    float base, gross, da, hra;

    printf("Enter basic salary: ");
    scanf("%f", &base);


    if(base <= 10000)
    {
        da  = base * (80/100);
        hra = base * (20/100);
    }
    else if(base <= 20000)
    {
        da  = base * (90/100);
        hra = base* (25/100);
    }
    else
    {
        da  = base * (95/100);
        hra = base * (30/100);
    }

   
    gross = base + hra + da;

    printf("GROSS SALARY = %.5f", gross);

    return 0;
}
