/*Завдання 6.1
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
#include "locale.h"

float funcG(float g);
float funcT(float t);

int main(void) 
{
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  float x, res;
  printf("Введіть х: ");
  scanf("%f", &x);
  res = funcG(x)/2 + 2*funcT(x); //Результат=f(x)=g(x)/2+2t(x)
  printf("Результат = %.2f",res);
  return 0;
}

float funcG(float g) //g(x)
{
  g = pow(g,3)+(2*g);
  return (g);
}
  
float funcT(float t) //t(x)
{
  t = log(t-1);
  return (t);
}*/