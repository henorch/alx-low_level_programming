#include "main.h"

/**
 * _strchr- this locate a character in a string
 * @s: The string
 * @c: The character
 * Return: The pointer to th first occurence of the character
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; i >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
