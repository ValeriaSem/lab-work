#include <stdio.h>

int main() {
    double a;
    printf("Введите длину ребра куба: ");
    scanf("%lf", &a);
    double V = a * a * a;
    double S = 6 * a * a;
    printf("Объем куба: V = %.2f\n", V);
    printf("Площадь поверхности: S = %.2f\n", S);

    return 0;
}
