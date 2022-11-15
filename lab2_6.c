/*Завдання 2.6*/
#include <stdio.h>
#include "math.h"
#include "locale.h"

int main(){
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double D, x1, x2, a, b, c, ANS;
    printf("Введіть a: ");
    scanf("%lf", &a);
    printf("Введіть b: ");
    scanf("%lf", &b);
    printf("Введіть c: ");
    scanf("%lf", &c);
    D = pow(b , 2) - (4 * a * c);
    b=-b;
    x1 = (b + sqrt(D)) / (2 * a);
    x2 = (b - sqrt(D)) / (2 * a);
    printf("\nx1 = %f", x1);
    printf("\nx2 = %f", x2);
    if (D<0){
        ANS = a - pow(b, -c);
    } else if (D==0){
        ANS = atan(x1);
    } else if (D>0){
        ANS = cos(x1 * x2);
    }
    printf("\nВеличини які були обчислити: %f", ANS);
}