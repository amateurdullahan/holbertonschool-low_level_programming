#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings followed by newline
 * @seperator: the string printed between strings
 * @n: number of strings passed to function
 *
 * Return: nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
unsigned int c;
char *p;
va_list string;

va_start(string, n);

for (c = 0; c < n; c++)
{
p = va_arg(string, char*);
if (p == NULL)
{
printf("(nil)");
}
else
printf("%s", p);
if (seperator != NULL && c + 1 < n)
{
printf("%s", seperator);
}
}
va_end(string);
printf("\n");
}
