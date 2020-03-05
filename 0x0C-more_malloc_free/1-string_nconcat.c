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

  for (fl = 0; *s1; fl++)
    ;
  cat = malloc(sizeof(char) * (fl + n));
  if (cat == NULL)
    {
      return (NULL);
    }

  for (fl = 0; *s1; fl++)
    {
      cat[fl] = s1[fl];
    }

  if (s2 == NULL)
    {
    s2[0] = '\0';
    cat[fl + 1] = *s2;
    }
  else
    for (sl = 0; sl < n; sl++)
      {
	cat[fl + sl] = s2[sl];
      }
  if(sl > n)
    {
      cat[fl + sl + 1] = '\0';
    }
  return (cat);

}
