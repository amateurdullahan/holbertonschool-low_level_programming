#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * 
 */

void print_chessboard(char (*a)[8])
{
  int c, r;
  

  for(r = 0; a[r][c]; r++) 
    {
      for(c = 0; a[r][c]; c++)
	{
	  _putchar(a[r][c]);
	}
    }

}
