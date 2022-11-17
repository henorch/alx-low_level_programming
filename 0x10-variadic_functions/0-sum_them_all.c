#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- I print sout the sum ofvariadic function
 * @n: an unsigned number of arguments
 * Return: 0 if n == 0; else return sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list argnum;
va_start(argnum, n);

for (i = 0; i <  n; i++)
sum += va_arg(argnum, int);

va_end(argnum);

return (sum);
}
