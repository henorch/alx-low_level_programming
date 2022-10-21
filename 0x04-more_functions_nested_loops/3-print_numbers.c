#include "main.h"
/**
 *print_numbers- This print number from 0 -9
 *
 * Return: Return the default 0
 */

void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
