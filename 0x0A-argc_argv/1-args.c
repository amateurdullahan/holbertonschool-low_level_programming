#include <stdio.h>

/**
 * main - prints number of arguments passed to program
 * @argc: argument counter
 * @argv: pointer array of arguments
 *
 * Return: 0 which is positive
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
