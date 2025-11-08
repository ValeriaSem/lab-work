#include <stdio.h>

int main() {
    float R;
    const float PI = 3.14;
    
    printf("Введите радиус R: ");
    scanf("%f", &R);
    
    printf("Длина окружности L = %.2f\n", 2 * PI * R);
    printf("Площадь круга S = %.2f\n", PI * R * R);
    
    return 0;
}
