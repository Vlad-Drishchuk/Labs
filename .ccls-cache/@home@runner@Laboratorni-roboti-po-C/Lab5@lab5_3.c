/*Завдання 5.3
#include "stdio.h"
#include "locale.h"

int main() {
  srand(time(NULL));
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  double arr[4][4]={
  {3.97, 4.89, 11.17, 5.67},
  {-7.52, -11.67, -5.8, 4.12},
  {15.96, 12.9, -14.20, 8.5},
  {11.7, -4.5, 2.94, 2.17},
  }, sum=0, an;
  int i, j, n=0;
  for(j = 0; j<4; j++){
    sum=sum+arr[j][0];
    n++;
  }
  an=sum/n;
  printf("Серпедне арифматичне 1 стовпця %f", an);
  sum=0;
  n=0;
  for(j = 0; j<4; j++){
    sum=sum+arr[j][1];
    n++;
  }
  an=sum/n;
  printf("\nСерпедне арифматичне 2 стовпця %f", an);
  sum=0;
  n=0;
  for(j = 0; j<4; j++){
    sum=sum+arr[j][2];
    n++;
  }
  an=sum/n;
  printf("\nСерпедне арифматичне 3 стовпця %f", an);
  sum=0;
  n=0;
  for(j = 0; j<4; j++){
    sum=sum+arr[j][3];
    n++;
  }
  an=sum/n;
  printf("\nСерпедне арифматичне 4 стовпця %f", an);
  return 0;
}*/