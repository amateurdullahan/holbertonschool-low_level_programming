#include "holberton.h"

/**
 * main - c
 *
 * Return: no thing
 */

void puts2(char *str)
{
  int i;
  int c = 1;
  for(i = 0; str[i] != '\0'; i++)
    {
      if(c % 2 != 0)
	{
      _putchar(str[i]);
	}
      c++;
    }
  _putchar('\n');
}
