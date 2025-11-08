#include <stdio.h>

int main() {
    float a, b;
    
    printf("Введите два числа a и b: ");
    scanf("%f %f", &a, &b);
    
    printf("Среднее арифметическое = %.2f\n", (a + b) / 2);
    
    return 0;
}
