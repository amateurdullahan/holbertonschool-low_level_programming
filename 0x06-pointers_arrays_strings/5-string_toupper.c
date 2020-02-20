#include "holberton.h"

/**
 * *string_toupper - makes lower upper yay
 *
 * Return: no
 */

char *string_toupper(char *s)
{
  int c;
  for(c = 0; s[c] != '\0'; c++)
    {
      if(s[c] >= 97 && s[c] <= 122)
	{
	  s[c] = s[c] - 32;
	}
    }
  return (s);
}
