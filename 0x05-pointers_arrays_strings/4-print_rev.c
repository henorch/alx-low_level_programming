#include "main.h"
/**
 * print_rev- reverse
 *@s: pointer
 * Return: void
 */
void print_rev(char *s)
{
int cnt = 0;
while (cnt >= 0)
{
if (s[cnt] == '\0')
break;
cnt++;
}
for (cnt--; cnt >= 0; cnt--)
{
_putchar(s[cnt]);
}
_putchar('\n');
}
