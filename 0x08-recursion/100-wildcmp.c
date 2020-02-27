/**
 * wildskip - skip all wildcards
 * @s1: first string
 * @s2: second string
 *
 */

int wildskip(char *s2)
{
  if (*s2 == '*')
    {
      return(wildskip(s2 + 1));
    }
}


/**
 * cmpstr - the actual comparison
 * @s1: string one
 * @s2: string two
 */
int cmpstr(char *s1, char *s2)
{
  if (s1 != s2)
    {
      return (0);
    }
  else if (*s1 && *s2 && s1 == s2)
    return cmpstr(++s1, wildskip(++s2));
  else
    return (1);
}

/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string
 */

int wldcmp(char *s1, char *s2)
{
  return (cmpstr(s1, s2));
}
