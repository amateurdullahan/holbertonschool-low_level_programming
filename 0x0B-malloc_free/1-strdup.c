#include <stdlib.h>

/**
 * *_strdup - copies string to allocated mem
 * @str: string to be copied
 *
 * Return: pointer to new string OR NULL
 */

char *_strdup(char *str)
{
char *copy;
int c;

if(!*str)
{
return (NULL);
}
else
for(c = 0; str[c]; c++)
{
}
copy = malloc(c * sizeof(char));
for(c = 0; str[c]; c++)
{
copy[c] = str[c];
}
return (copy);
}
