/*Завдання 6.5
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
#include "locale.h"

int funcF(unsigned n, double z);

int main(void){
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  	int k;
	double x, result;
	printf("\nВведіть k: ");
	scanf("%d", &k);
	printf("\nВведіть x: ");
  	scanf("%lf", &x);
	result = funcF(k, x);
	printf("f(x)= %.2lf", result);
	return 0;
}
int funcF(unsigned n, double z){
	if(z==7*n){
		return 4;
	} else if(z<7){
		printf("1\n");
		return funcF(fabs(z-1), n)+4*z;
	} else if(z!=7*n){
		printf("2\n");
		return 3*log(z-1)-5*funcF(n,(z-5));
	}
}*/