#include "holberton.h"

/**
 * main - u c
 *
 * Return: nah dawg
 */

void rev_string(char *s)
{
  int t;
  int c;
  char temp[] = *s;
  int len = _strlen(s);

  for(c = len; s[c] >= 0; c--)
    {
      temp = s[c];
    }
  for(t = len; temp[t] != '\0'; t++)
    {
      s = temp[t];
    }
}
