#include "holberton.h"

/**
 * _print_rev_recursion - print a string reverse
 * @s: string in question
 */

void _print_rev_recursion(char *s)
{
  if (*s != '\0')
    {
      s++;
    }
  else if (*s == '\0')
    {
      s--;
      _putchar(*s);
    }
  else
    {
      _putchar('\n');
    }
  _print_rev_recursion(s);

}
