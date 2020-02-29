#include <stdio.h>
/**
 * main - print name of program
 * @argc: unused attribute
 * @argv: pointer array of arguments
 *
 * Return: 0 which is positive
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
printf("%s", argv[0]);
putchar('\n');
return (0);
}
