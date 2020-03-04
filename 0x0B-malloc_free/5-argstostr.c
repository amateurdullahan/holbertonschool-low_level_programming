#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - func concats arguments
 * @ac: argument count
 * @av: double pointer array of arguements
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
int a, n, c = 0, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (a = 0; a < ac; a++)
{
for (n = 0; av[a][n]; n++)
len++;
}
len += ac;

str = malloc(sizeof(char) * len + 1);
if (str == NULL)
{
return (NULL);
}
for (a = 0; a < ac; a++)
{
for (n = 0; av[a][n]; n++)
{
str[c] = av[a][n];
c++;
}
if (str[c] == '\0')
{
str[c++] = '\n';
}
}
return (str);
}
