#include "main.h"
/**
 * puts_half- This half a string
 * @str: input pointer string
 * Return: void
 */

void puts_half(char *str)
{
int i, cnt = 0;
for (i = 0; *(str + i) != '\0'; i++)
cnt++;

if (cnt % 2 == 1)
i = cnt  / 2;
else
i = (cnt - 1) / 2;

for (i++; i < cnt; i++)
_putchar(str[i]);

_putchar('\n');
}
