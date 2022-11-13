#include "stdio.h"
#include "math.h"
#include "locale.h"


int main()
{
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double a, b, c, k, l, m; // Оголошення змінних
    printf("Ведіть сторону A: "); // Введення даних
    scanf("%lf", &a);
    printf("\nВведіть сторону B: ");
    scanf("%lf", &b);
    printf("\nВедіть сторону C: ");
    scanf("%lf", &c);
    l = (a*a + c*c - b*b) / (2 * a*c); // Обчислення косинуса
    k = acos(l)*180/3.1415; // Обчислення кута
    m = sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)) / 2; // Обчислення медіани
    printf("Кут дорiвнює %3.2f\n", k); // Вивидення кута
    printf("Медіана: %.2f\n", m); //Вивидення медіани
}