/*Завдання 3.4*/
#include "stdio.h"
#include "math.h"
#include "locale.h"

/*
int main() {
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  double x, y, a, b, i, ar, yn, arsum;
  int yi = 1;
  a=0;
  b=6;
  printf("Через цикл for:\n");
  ar=0;
  yn=0;
  for (x=a; x<=b; x=x+(0.1*(b-a))){
    y = x*exp(atan(x));
    printf("y%d = %.2f\n", yi, y);
    yi++;
    if (1<y && y<7.9){
      ar=ar+y;
      yn++;
    }
  }
  yi=1;
  arsum = (ar / yn);
  printf("Середне арифматичне: %f\n", arsum);

  
  printf("\nЧерез цикл while\n");
  x=a;
  ar=0;
  yn=0;
  while(x<=b){
    y = x*exp(atan(x));
    printf("y%d = %.2f\n", yi, y);
    yi++;
    x=x+(0.1*(b-a));
    if (1<y && y<7.9){
      ar=ar+y;
      yn++;
    }
  }
  yi=1;
  arsum = (ar / yn);
  printf("Середне арифматичне: %f\n", arsum);

  printf("\nЧерез цикл do:\n");
  x=a;
  ar=0;
  yn=0;
  do{
    y = x*exp(atan(x));
    printf("y%d = %.2f\n", yi, y);
    yi++;
    x=x+(0.1*(b-a));
    if (1<y && y<7.9){
      ar=ar+y;
      yn++;
    }
  } while(x<=b);
  arsum = (ar / yn);
  printf("Середне арифматичне: %f\n", arsum);
  
  return 0;
}
*/