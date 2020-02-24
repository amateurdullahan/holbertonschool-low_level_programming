/**
 * _strspn - gets the length of prefix substring
 * @s: the string
 * @accept: substring
 *
 * Return: number of bytes in s that matches accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int c, d, e;
unsigned int p;

for (e = 0; accept[e]; e++)

for (c = 0; c != e; c++)
{
for (d = 0; accept[d]; ++d)
{
if (accept[d] == s[c])
{
p ++;
break;
}
}
}
return (p);
}
