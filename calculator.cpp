#include <stdio.h>
int main() {
    char x;
    double a,b;
    printf("Enter an operator (+, -, *,): \n ");
    scanf("%c", &x);
    printf("Enter two operands: \n");
    scanf("%lf %lf", &a, &b);

    switch (x) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf",a, b, a + b);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf",a, b, a - b);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
