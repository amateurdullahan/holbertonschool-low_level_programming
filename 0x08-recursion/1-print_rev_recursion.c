#include "holberton.h"

/**
 * _print_rev_recursion - recursively prints string
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
  s++;
_print_rev_recursion(s);
 _putchar(*s);
}
/*_putchar('\n');*/
}
