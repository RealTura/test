#include "board_print_plain.h"

void boardPrint(char *A)
{
  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
      printf("%c", A[i][j]);
    printf("\n");
  }
}
