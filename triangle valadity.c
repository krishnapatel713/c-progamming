#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("Valid Triangle\n");
    else
        printf("Not a Valid Triangle\n");

    return 0;
}