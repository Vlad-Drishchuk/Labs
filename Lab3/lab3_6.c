/*Завдання 3.6*/
#include <stdio.h>
#include <math.h>

int main(){
  double an, x = 0.1, dx, y, sum = 0, xmin = 0.1, xmax = 0.9, e = 0.0001, factorial;
  int k = 0, n, i;

  printf("Введіть кількість кроків табуляції:");
  scanf("%i", &n);
  dx = (xmax - xmin) / (n - 1);
  printf("\nx               y(x)\n");
  factorial=1;
  for(i = 1; i <= n; i++){
        for (int i2 = (2*i-1); i2<=i; i2++){
            factorial=factorial*i2;
        }
    x = x + ((pow(x, 2*i-1))/(factorial));
    y = ((exp(x)-exp(-x))/(2));
    printf("%f\t%f\n", x, y);
  }

    printf("\nan              x               k\n");

  for (long int i = 0; i < n; i++)
  {
    x = xmin + dx * (i - 1);
    an = ((exp(x)-exp(-x))/(2));
    
    printf("%f\t%f\t%d\n", x, an, k);

    if ( fabs(an) < e)
    {
      break;
    }
    k++;

    }  
}