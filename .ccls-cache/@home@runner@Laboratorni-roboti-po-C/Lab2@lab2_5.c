/*#include <stdio.h>
#include "math.h"
#include "locale.h"
#include <stdlib.h>

int main() {
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double z, x, y;
    printf("Введіть x:");
    scanf("%lf", &x);
    printf("Введіть y:");
    scanf("%lf", &y);
    if (x<0){
        z= cos(fmax(x,y));
    } else if (x>=0){
        z=sin(fmin(x, y));
    }
    printf("z = %i", z);
}*/