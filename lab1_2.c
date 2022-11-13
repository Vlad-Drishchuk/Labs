#include "stdio.h"
#include "math.h"
#include "locale.h"

/*int main(){
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double a, b, x, F, E1, E2, E3; // Оголошення змінних
    printf("Введіть a: "); // Введення змінних
    scanf("%lf", &a);
    printf("\nВведіть b:");
    scanf("%lf", &b);
    printf("\nВведіть x:");
    scanf("%lf", &x);
    E1 = sin(log(fabs(x - 1))); // Обчислення E1
    E2 = log(fabs(sin(x) - 1)); // Обчислення E2
    E3 = (a + b) * sqrt(fabs((a * b) + b)) / 2; // Обчислення E3
    F = ((pow(E1, 2) + fabs(E2) + E3) / (sqrt(fabs(E1 * E3)))) - (1 / 3); // Обчислення F
    printf("\n Число F= %lf", F); // Вивидення F
}*/