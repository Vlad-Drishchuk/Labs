/*Завдання 3.3
#include "stdio.h"
#include "math.h"
#include "locale.h"


int main() {
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double n, sum, a, x, i, factorial;
    n=1;
    sum=0;
    x=0.41;
    a=-1;

    do {
        factorial=1;
        for (i = 1; i<=n; i++){
            factorial=factorial*i;
        }
        a = pow(-1,n)*((pow(x,2*n))/(2*factorial));
        n++;
        sum++;
        printf("%f\n", a);
    } while (a<=0.001);
    printf("sum= %.0f", sum);
    return 0;
}


*/