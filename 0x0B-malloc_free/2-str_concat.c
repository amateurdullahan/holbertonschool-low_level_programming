#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concat string OR NULL
 */

char *str_concat(char *s1, char *s2)
{
  char *concat;
  int c, d;

  for(c = 0; s1[c]; c++)
    ;
  for(d = 0; s2[d]; d++)
    ;
  concat = malloc((c + d) * sizeof(char));

  for(c = 0; s1[c]; c++)
    {
      concat[c] = s1[c];
    }
  for(d = 0; s2[d]; d++)
    {
      concat[c+d] = s2[d];
    }
  return (concat);
}
