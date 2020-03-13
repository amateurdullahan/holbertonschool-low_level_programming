#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers followed by newline
 * @seperator: the string printed between numbers
 * @n: number of integers passed to function
 *
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
unsigned int c;
int p;
va_list num;

va_start(num, n);

for (c = 0; c < n; c++)
{
p = va_arg(num, int);
printf("%d", p);
if (seperator != NULL && c + 1 < n)
{
printf("%s", seperator);
}
}
va_end(num);
printf("\n");
}
