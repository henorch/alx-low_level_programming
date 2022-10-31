#include "main.h"

/**
 * _memset- the fill item
 * @s: the constant that get the byte
 * @b: The constant
 * @n: number of time required
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
