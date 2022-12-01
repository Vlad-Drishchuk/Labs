/*Завдання 6.5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int funcF(unsigned n, double z); //x=z k=n 

int main(void)
{
  unsigned k;
  double x, result;

  printf("\nEnter k: ");
  scanf_s("%d", &k);
  printf("Enter x: ");
  scanf_s("%lf", &x);
  
  result = funcF(k,x);
  printf("f(x)= %.2lf", result);
  return 0;
}
int funcF(unsigned n,double z ) //x=z k=n 
{
  if (z == 5 * n)
    return 5;
  else if (z < 5)
    return funcF(fabs(z - 1),n) - 2;
  else if (z != 5 * n)
    return log(z - 1) - 4 * (funcF(n,(z - 2)));
}*/