/*Завдання 3.1*/
#include "stdio.h"
#include "math.h"
#include "locale.h"

int main() {
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double x, y, N, a, b, i;
    a=0;
    b=1;
    printf("Введіть число N:");
    scanf("%fl", &N);
    for (x=a; x<=b; x=x+((b-a)/N)){
        y = 4 * x * exp(x) * sin(x);
        printf("%.2f\n", y);

    }
}
