#include <stdio.h>

/**
 * main - print double digit numbers
 *
 * Description: print double digit numbers in ascending order
 * using putchar and incremented variables
 *
 * Return: value is 0 is positive
 */
int main(void)
{
int i, j;

i = 48;
j = 48;
while (i < 58)
{
while (j < 58)
{
putchar(i);
putchar(j);
if (i != 57 || j != 57)
{
putchar(44);
putchar(32);
}
j++;
}
j = 48;

i++;
}
putchar('\n');
return (0);
}
