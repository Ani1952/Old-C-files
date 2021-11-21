#include <math.h>
#include <stdio.h>



int main() {
    double a, b, c, disc, r1, r2, realPart, imgPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    disc = b * b - 4 * a * c;

 
    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }

 
    else if (disc == 0) {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %.4lf;", r1);
    }


    else {
        realPart = -b / (2 * a);
        imgPart = sqrt(-disc) / (2 * a);
        printf("root1 = %.4lf+%.4lf i and root2 = %.4f-%.4fi", realPart, imgPart, realPart, imgPart);
    }

    return 0;
}
