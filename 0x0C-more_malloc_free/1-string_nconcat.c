#include <stdlib.h>

/**
 * *string_nconcat - concat 2 stirngs to n length
 * @s1: first string
 * @s2: second string
 * @n: length of second string concat'd
 *
 * Return: concat string OR NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cat;
unsigned int fl, sl;

if (s1 == NULL)
{
*s1 = '\0';
}
if (s2 == NULL)
{
*s2 = '\0';
}

for (fl = 0; s1[fl] != '\0'; fl++)
;

for (sl = 0; s2[sl] != '\0'; sl++)
;

if (n > sl)
{
n = sl;
}
cat = malloc(sizeof(char) * (fl + n));
 
if (cat == NULL)
{
free(cat);
return (NULL);
}

else
for (fl = 0; s1[fl] != '\0'; fl++)
{
cat[fl] = s1[fl];
}
for (sl = 0; sl < n; sl++)
{
cat[fl+sl] = s2[sl];
}

cat[fl+sl+1] = '\0';
return (cat);
}
