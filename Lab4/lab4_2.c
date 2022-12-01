/*Завдання 4.2
#include "stdio.h"
#include "math.h"
#include "locale.h"

int main() {
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  int num [5], sum = 0;
  double as;
  int i, a=0, n=5;
  for (i=0; i<n; ++i){
    printf("num[%d]= ", i);
    scanf("%d", &num[i]);
  }
  printf("*****************\n");
  for (i=0; i<n; i++){
    printf("num [%d] = %d\n", i, num[i]);
  }
  for (i=0; i<n; i++){
    sum = sum + num[i];
    a++;
  }
  printf("*******************\n");
  printf("Sum = %d \n a = %d\n", sum, a);
  as=sum/a;
  printf("Середне арифматичне: %.0f", as);
  for(i=0; i<n; i++){
    if(num[i] == as){
      printf("\nНайблище число до середнього арифматичного в комірці [%d] = %d",i ,num[i]);
    } 
	if (num[i] - as == -1){
      printf("\nНайблище число до середнього арифматичного в комірці [%d] = %d",i ,num[i]);
    }
  }

    return 0;
}*/