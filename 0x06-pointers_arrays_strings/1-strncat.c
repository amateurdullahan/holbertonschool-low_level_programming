#include "holberton.h"
#include <unistd.h>

int _putchar(char c);

char *_strncat(char *dest, char *src, int n)
{
  int d;
  int s;

  for(d = 0; dest[d] != '\0'; d++)
    {
      _putchar(dest[d]);
    }
  for(s = 0; src[s] < n; s++)
    {
      if (src[s] != '\0')
	{
      _putchar(src[s]);
	}
      else if (src[s] == '\0')
	{
	  _putchar('\0');
	  break;
	}
    }
  /* if(src[s] < n)
    {
      _putchar('\0');
      }*/
  return (dest);
}

int _putchar(char c)
{
  return (write(1, &c, 1));
}
