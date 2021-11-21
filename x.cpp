#include <stdio.h>

int multiply(int n) {
    if (n>=1)
        return n*multiply(n-1);
    else
        return 1;
}

int main() {
    int n;
    printf("Enter range: ");
    scanf("%d",&n);
    printf("product till range %d is %d ", n, multiply(n));
    return 0;
}

