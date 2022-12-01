/*Завдання 4.1
#include "stdio.h"
#include "math.h"
#include "locale.h"

int main() {
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  double Num[10] = {0.1, -27.3, 35.7, -71.4, 0, 12, -5, -7.3, 0.5, 14};
  double a = 0;
  for (int i = 1; i <= 10; i=i+2){
    printf("\n%.1f", Num[i]);
    a = a + Num[i];
  }
  printf("\n Добуток: %f", a);
  return 0;
}*/