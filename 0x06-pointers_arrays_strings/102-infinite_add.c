/**
 * *infinite_add - add the infinite
 * @n1 - first number
 * @n2 - second number
 * @r - buffer
 * @size_r - size of buffer
 *
 * Return: value of addition
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  if ((n1 + n2) > size_r)
    {
      return (0);
    }
  else
    {
      r = (n1 + n2);
      return (r);
    }
}
