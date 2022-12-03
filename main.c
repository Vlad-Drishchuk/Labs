#include "stdio.h"
#include "locale.h"

int main() {
  srand(time(NULL));
  setlocale(LC_CTYPE, "ukr"); // Підключення української мови
  int matrix[9][5], i, j,n=0;
  for(i=0;i<9;i++){
    for(j=0; j<5;j++){
      matrix[i][j] = rand() % 20;
    }
  }
  for(i=0;i<9;i++){
    for(j=0; j<5;j++){
      printf("%2d ", matrix[i][j]);
    }
    printf("\n");
  }
  for(n=-20;n<20;n++){
    for(i=0;i<9;i++){
      for(j=0; j<5;j++){
        if(matrix[i][j]==n){
          printf("\nНайменьше значення матриці %2d, за адресою [%2d] [%2d]", matrix[i][j], i, j);
          printf("\n");
          for(j=0; j<5;j++){
            printf("%2d ", matrix[i][j]);
          }
        return 0;
        }
      }
    }
  }
return 0;
}