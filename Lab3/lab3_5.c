/*#include "stdio.h"

int main() 
{
  double x, x1 = 1, x2 = 1;
  scanf("%lf", &x);


  //Чисельник
  for (int i = 1; i < 129; i++)
  {
    if (i % 3 == 0 || i == 1 && i !=4)
    {
      x1 *= x + i;
    }
  }

  //Знаменник
  for (int i = 100; i > 0; i-=2)
  {
    x2 *= x - i;
  }

  double result = x1 / x2;
  printf("%lf", result);
  return 0;
}*/