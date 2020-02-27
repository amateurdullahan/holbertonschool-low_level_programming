/**
 * checker - checks primes
 * @c - number to divide in
 * @prime - number divided into
 *
 * Return: 1 if prime, 0 if not
 */

int checker(c, prime)
{
if (prime % c == 0 || prime < 2)
{
return (0);
}
else if (c == prime - 1)
{
return (1);
}
else if (prime > c)
{
return (checker(c + 1, prime));
}
}

/**
 * is_prime_number - is a number is prime
 * @n: integer being checked
 *
 * Return: 1 is prime, 0 if not
 */

int is_prime_number(int n)
{
  return (checker(2, n));
}
