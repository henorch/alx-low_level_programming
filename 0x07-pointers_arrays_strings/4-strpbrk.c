#include "main.h"
/**
 * _strpbrk- search for a bite and stop
 * @s: The string
 * @accept: The byte
 * Return: To the matching byte
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return ('\0');
}
