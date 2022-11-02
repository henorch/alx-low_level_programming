#include "main.h"
/**
 * _puts_recursion- This print a string
 * @s: The string parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}

