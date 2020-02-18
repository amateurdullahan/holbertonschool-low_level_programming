#include "holberton.h"

/**
 * main - c
 *
 * Return: no thing
 */

void puts_half(char *str)
{
  int c;
  int l;
  int h;

  for (l = 0; str[l] != '\0'; l++)
    {

    }
  if (l % 2 != 0)
    {
      h = (l - 1) / 2;
    }
  else
    {
      h = l / 2;
    }
  for(c = 0; c < l; c++)
    {
      if(c >= h)
	{
      _putchar(str[c]);
	}
    }
  _putchar('\n');
}
