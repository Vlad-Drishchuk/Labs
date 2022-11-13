// Підключення бібліотек
#include "stdio.h"
#include "math.h"
#include "locale.h"

int main(){
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double r, s;
    const double PI = 3.141592653589793;
    printf("Введіть радіус кола: ");
    scanf("%lf", &r);
    s = (PI * pow(r, 2)) / 2;
    printf("\n Шукане число= %.3f\n", s);
}