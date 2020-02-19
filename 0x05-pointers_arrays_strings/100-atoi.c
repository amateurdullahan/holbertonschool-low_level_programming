#include "holberton.h"

/**
 * _atoi - print numbers in string
 *
 * Return: noting man
 */

int _atoi(char *s)
{
  int l;
  int val = 0;
  int pos = 0;
  int neg = 0;

  for(l = 0; s[l] != '\0'; l++)
    {
      if(s[l] == '+')
	{
	  pos++;
	}
      if(s[l] == '-')
	{
	  neg++;
	}
      if(s[l] >= '0' && s[l] <= '9')
	{
	  if (pos > neg)
	    {
	      continue;
	    }
	  else if (neg >= pos)
	    {
	      _putchar('-');
	    }
	  while (s[l] >= '0' && s[l] <= '9')
	    {
	      _putchar(s[l]);
	      l++;
	    }
	  break;
	}
      else
	{
	  return (0);
	}
    }
  _putchar('\n');
}
