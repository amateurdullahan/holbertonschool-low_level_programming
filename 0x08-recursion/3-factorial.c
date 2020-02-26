/**
 * factorial - lets do some maths
 * @n : the number that needs to be math'd
 *
 * Return: factorial OR -1
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1 || n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
