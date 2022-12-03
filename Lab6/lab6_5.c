/*Завдання 6.5
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
#include "locale.h"

int funcF(double f);
int funcG(double g);

int main(void){
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  double res;
		unsigned x;
  printf("Введіть x: ");
  scanf("%d", &x);
  res=funcF(x);
  printf("F(x) = %f", res);
}
int funcF(double f){
  if(f==6){
    return 3;
  } else if(f>6){
    return log(funcG(f)-2*f);
  }else return 0;
}
int funcG(double g){
	
  return funcF(g-1)-3*pow(g,2);
} */