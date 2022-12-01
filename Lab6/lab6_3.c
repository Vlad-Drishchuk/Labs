/*Завдання 6.3
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
#include "locale.h"


int funcF(unsigned x);

int main(void)
{
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  unsigned x, result;
  printf("Введіть x: ");
  scanf("%d", &x);
  result = funcF(x);
  printf("f(x)= %d", result);
  return 0;
}

int funcF(unsigned x)
{
  if (x == 6)
    return 3;
  else if (x > 6)
  {
    return (x - 1)/3);
  }
}*/