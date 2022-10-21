#include "main.h"
/**
 *print_line- This print line on terminal
 *@n: hold variabl
 *Return: we return something
 */

void print_line(int n)
{
int i;	
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar('-');
}
}
_putchar('\n');
}
