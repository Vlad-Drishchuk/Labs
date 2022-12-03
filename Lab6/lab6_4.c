/*Завдання 6.4
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
#include "locale.h"

double funcF(unsigned a, double b);
int main(void)
{
	  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
	unsigned x;
	double y, result;
	printf("Ввести x: ");
	scanf("%d", &x);
	printf("\nВвести y: ");
	scanf("%lf", &y);

	result = funcF(x, y);
	printf("\nf(x)= %.3lf", result);
	return 0;
}

double funcF(unsigned a, double b) //x=a y=b
{
	if (a == 3 || b == 0){
		return 2;
    }
	else if (a > 3 && b == funcF(a - 1, b - 1)-5*pow(a, 2)){
    	return b-exp(a-b);
  } else return 0;
}*/