#include "main.h"
/**
 * put2- skip counting
 * @str: The input pointer
 * Return: void
 */

void put2(char *str)
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
{
_putchar(str[cnt]);
cnt++;
}
}
}
