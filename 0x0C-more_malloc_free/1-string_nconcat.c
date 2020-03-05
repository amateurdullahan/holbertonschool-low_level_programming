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
  char *concat;
unsigned int c, d;

  for(c = 0; s1[c]; c++)
    ;
  for(d = 0; s2[d]; d++)
    ;
  if( n >= d)
    {
      n = d;
    }
  concat = malloc((c + n) * sizeof(char));
  if (concat == NULL)
    {
      return(NULL);
    }
  for(c = 0; s1[c]; c++)
    {
      concat[c] = s1[c];
    }
  for(d = 0; d < n; d++)
    {
      concat[c+d] = s2[d];
    }
  return (concat);
}
