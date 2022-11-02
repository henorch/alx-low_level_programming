#include "main.h"
/**
 * factorial- The perform a factorial
 * @n: The integer
 * Return: return -1 to indicate error else return value
 */

int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
{
return (1);
}
else
{
n  = n * factorial(n - 1);
return (n);
}
}
