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
int c;

if (n == 0)
return (0);

for (c = 0; c < n; c++)
{
  sum += va_arg(list, c);
}
va_end(list);
return (sum);
}
