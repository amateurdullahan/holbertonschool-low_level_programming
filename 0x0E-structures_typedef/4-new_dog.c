#include <stdlib.h>
#include "dog.h"

/**
 * str_len - finds string length
 * @s: string to find length of
 *
 * Return: the length
 */

int str_len(char *s)
{
int c = 0;

while (*s)
{
c++;
}
return (c);
}


/**
 * new_dog - uses struct dog to create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int c;
char *a, *b;

if (name == NULL || owner == NULL)
{
return (NULL);
}
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
a = malloc(sizeof(char) * (str_len(name) + 1));
if (a == NULL)
{
free(new_dog);
return (NULL);
}
b = malloc(sizeof(char) * (str_len(owner) + 1));
if (b == NULL)
{
free(a);
free(new_dog);
return (NULL);
}
for (c = 0; name[c]; c++)
{
a[c] = name[c];
}
a[c] = '\0';
for (c = 0; owner[c]; c++)
{
b[c] = owner[c];
}
b[c] = '\0';
new_dog->name = a;
new_dog->age = age;
new_dog->owner = b;
return (new_dog);
}
