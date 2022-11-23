/*#include <stdio.h>
#include "math.h"
#include "locale.h"

int main() {
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double x1, x2, x3, x, y1, y2, y3, y;
    printf("Введіть x");
    scanf("%lf", &x);
    printf("\nВведіть x1:");
    scanf("%lf", &x1);
    printf("\nВведіть x2:");
    scanf("%lf", &x2);
    printf("\nВведіть x3:");
    scanf("%lf", &x3);
    printf("\nВведіть y1:");
    scanf("%lf", &y1);
    printf("\nВведіть y2:");
    scanf("%lf", &y2);
    printf("\nВведіть y3:");
    scanf("%lf", &y3);

    if (x = x3){
        y=y3+0.85;
    } else if(x2<=x && x<=x3){
        y=y2+((0.25*x-1)/(x3-x1))*(0.2*y2-y1);
    } else if(x1<=x && x<=x2){
        y=(2*y1)-((x-0.5*x1)/(x2-x1))*(y2-(0.1*y3));
    } else{
        printf("Функція не визначина");
    }
    printf("\nf(x)= %f", y);
}
*/