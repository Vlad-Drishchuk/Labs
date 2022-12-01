/*Завдання 3.2
#include "stdio.h"
#include "math.h"
#include "locale.h"

int main() {
    setlocale(LC_CTYPE, "ukr"); // Підключення української мови
    double n;
    int N;
    scanf("%i", &N);
    if(N<=100){
      printf("Число не вірне");
      return 0;
    }
    int lastNum = N%10;
    for(n=N; n>1; n=n/10){
      printf("%lf\n", n);
    }
    int n1=n*10;
    int n2=(int)(n*100)%10;
    printf("%i", n1+n2+lastNum);
    return 0;
}
*/