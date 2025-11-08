#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("Введите a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    printf("V = %.2f\n", a * b * c);
    printf("S = %.2f\n", 2 * (a*b + b*c + a*c));
    
    return 0;
}
