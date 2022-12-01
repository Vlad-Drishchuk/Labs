/*Завдання 5.1
#include "stdio.h"
#include "math.h"
#include "locale.h"

#define N 6

int main() {
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови 
  int matrix[N][N], startRow, startCol, i, j, k, l, minRow, minCol, temp;
  srand(time(NULL));
  for(i=0; i<N;i++){
    for(j=0; j<N; j++){
      matrix[i][j] = rand() % 30;
    }
  }
  for(i=0; i<N;i++){
    for(j=0; j<N; j++){
      printf("%2d ", matrix[i][j]);
    }
    printf("\n");
  }
   for (k = 0; k < N * 3; k++)
   {
// визначення рядка та стовпця початкового елементу
     startCol = k / 3;
     startRow = k % 3;
     if (startCol % 2 != 0)
       startRow = 2 - startRow;
// ініціалізація рядка та стовпця мінімального елементу
      minRow = startRow;
      minCol = startCol;
  for (l = k + 1; l < N * 3; l++)
  {
    // визначення рядка та стовпця елементу
    j = l / 3;
    i = l % 3;
    if (j % 2 != 0)
    i = 2 - i;
// пошук найменшого елементу
  if (matrix[minRow][minCol] > matrix[i][j])
  {
    minRow = i;
    minCol = j; 
    }
    
  }
// міняємо місцями найменший та початковий елементи
  temp = matrix[startRow][startCol]; matrix[startRow][startCol] = matrix[minRow][minCol]; matrix[minRow][minCol] = temp;
}
// Виводимо відсортовану матрицю на консоль
printf("\n");
for (i = 0; i < N; i++)
{
    for (j = 0; j < N; j++)
printf("%2d ", matrix[i][j]); printf("\n");
  }


  
  return 0;
}*/