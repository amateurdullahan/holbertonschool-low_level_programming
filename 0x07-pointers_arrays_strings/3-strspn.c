/**
 * _strspn - gets the length of prefix substring
 * @s: the string
 * @accept: substring
 *
 * Return: number of bytes in s that matches accept
 */

unsigned int _strspn(char *s, char *accept)
{
  unsigned int c;
  unsigned int p = 0;

  for (c = 0; s[c]; c++)
    {
      if( s[c] == accept[c])
	{
	  p++;
	}
    }
  return (p);
}
