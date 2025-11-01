#include <stdio.h>
int main() {
    float a, b;
    printf("Стороны: ");
    scanf("%f%f", &a, &b);
    printf("Площадь: %.2f\n", a * b);
    printf("Периметр: %.2f", 2 * (a + b));
    return 0;
}
