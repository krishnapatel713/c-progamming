#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Equilateral Triangle\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles Triangle\n");
        else
            printf("Scalene Triangle\n");
    } else {
        printf("Not a Valid Triangle\n");
    }

    return 0;
}