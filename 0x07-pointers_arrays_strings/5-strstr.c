/**
 * *_strstr - locate substring inside string
 * @haystack: first string
 * @needle: substring to be located
 *
 * Return: location of substring within haystack
 */

char *_strstr(char *haystack, char *needle)
{
int c, d, st, address;

d = 0;

for (c = 0; haystack[c]; c++)
{
if (haystack[c] == needle[d])
{
address = c;
st = c;
while (haystack[c] == needle[d] && haystack[c] != '\0' && needle[d] != '\0')
{
c++;
d++;
}
if (haystack[c] == needle[d])
{
return (&haystack[address]);
}
else
{
c = st;
break;
}
}
}
return (0);
}
