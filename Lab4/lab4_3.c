/*Завдання 4.3
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
int func(int arr[]);
int main() {
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови 
  int i, arr[15];
  for(i = 0; i<15; i++)
    {
     arr[i] = i + 1;  
    }

  int result = func(arr);
  printf("%d", result);
}

int func(int arr[])
{
   return min(min(arr[2], arr[6], arr[7]), max(arr[10], arr[9]), min(arr[4], arr[6], arr[8]));
}*/