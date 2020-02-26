/**
 * _pow_recursion - x to the y power
 * @x: 1st integer
 * @y: to the power of
 *
 * Return: x to power of y OR -1
 */

int _pow_recursion(int x, int y)
{
  if (y > 0)
    {
      return (x * _pow_recursion(x, y - 1));	
    }
  else
    return (-1);
}
