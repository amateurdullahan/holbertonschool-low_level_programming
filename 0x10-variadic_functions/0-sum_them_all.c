#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters OR 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
int sum = 0;
unsigned int c = 0;

if (n == 0)
{
return (0);
}

va_start(list, n);

while (c < n)
{
sum += va_arg(list, int);
c++;
}
va_end(list);
return (sum);
}
