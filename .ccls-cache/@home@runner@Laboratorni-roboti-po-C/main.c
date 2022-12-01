/*Завдання 6.2*/
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
#include "locale.h"

float funcT1(double s1, double t1, double a1, double v01);
float funcT2(double s2, double t2, double a2, double v02);

int main(void){
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  double s1, s2, t1=1, t2=1, a1=1, a2=1.6, v01=10, v02=9, ans1, ans2, ans21, ans22;

  ans1=funcT1(s1);
  ans1=funcT1(s1);
  
  return 0;
}

float funcS1(double s1, double t1, double a1, double v01){
  s1=(v01*t1+a1*pow(t1, 2))/(2);
  return (s1);
}
float funcS2(double s2, double t2, double a2, double v02){
  s2=(v02*t2+a2*pow(t2, 2))/(2);
  return (s2);
}