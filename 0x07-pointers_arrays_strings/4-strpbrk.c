/**
 * *_strpbrk - searches string for set of bytes
 * @s: string
 * @accept: bytes
 *
 * Return: pointer to byte that matches tring
 */

char *_strpbrk(char *s, char *accept)
{
int c, d;

for (c = 0; s[c]; c++)
{
for (d = 0; accept[d]; d++)
{
if (accept[d] == s[c])
{
return (&s[c]);
}
}
}
return (0);
}
