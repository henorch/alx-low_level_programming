#include "main.h"
/**
 * puts2- skip count
 * @str: input pointer
 * Return: void
 */

void puts2(char *str)
{
int cnt = 0;

while (cnt >= 0)
{
if (str[cnt] == '\0')
{
_putchar('\n');
break;
}
if (cnt % 2 == 0)
_putchar(str[cnt]);
cnt++;
}
}
