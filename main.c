/*Завдання 3.4*/
#include "stdio.h"
#include "math.h"
#include "locale.h"


int main() {
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double x, y, a, b, i;
    a=0;
    b=6;
    for (x=a; x<=b; x=x+(0.1*(b-a))){
        y = x*exp(atan(x));
        printf("%.2f\n", y);
    }
    
}


