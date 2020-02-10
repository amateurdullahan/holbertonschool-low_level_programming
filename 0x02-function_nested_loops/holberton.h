#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

void print_alphabet(void)
{
  char a = 'a';
  while (a <= 'z')
    {
      _putchar(a);
      a++;
    }
  _putchar('\n');
}

void print_alphabet_x10(void)
{
  int c = 0;
  char a;
  while (c < 10)
    {
      char a = 'a';
      while (a <= 'z')
	{
	  _putchar(a);
	  a++;
	}
      c++;
      _putchar('\n');
    }
}

int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
    {
      return (1);
    }
  else 
    {
      return (0);
    }
}

int _isalpha(int c)
{
  if (c >= 'a' && c <= 'z')
    {
      return (1);
    }
  else if (c >= 'A' && c <= 'Z')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int print_sign(int n)
{
  if (n > 0)
    {
      _putchar('+');
      return (1);
    }
  else if (n < 0)
    {
      _putchar('-');
      return (-1);
    }
  else
    {
      _putchar('0');
      return (0);
    }
  _putchar('\n');
}

int _abs(int ab)
{
  if (ab < 0)
    {
      ab = -(ab);
    }
  return (ab);
}

int print_last_digit(int n)
{
  int l;
  l = n % 10;
  return (l);
}
