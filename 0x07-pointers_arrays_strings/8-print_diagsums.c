#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals in matrix
 * @a: pointer to matrix start
 * @size: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int b, c, d, e, f;

e = 0;
f = 0;

for (b = 0; b < size; b++)
{
d = (b * size) + b;
e += *(a + d);
}
for (c = 0; c < size; c++)
{
d = (c * size) + (size - 1 - c);
f += *(a + d);
}
printf("%i, %i\n", e, f);
}
