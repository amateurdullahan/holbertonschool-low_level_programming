#include "holberton.h"

void print_alphabet_x10(void)
{
  int c = 0;
  char a;
  while (c < 10)
    {
      a = 'a';
      while (a <= 'z')
	{
          _putchar(a);
          a++;
	}
      c++;
      _putchar('\n');
    }
}
