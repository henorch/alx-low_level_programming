#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_number- I print numbers with seperator
 * @seperator: I am comma seperator
 * @n: I am number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list nums;

va_start(nums, n);

for (i = 0; i < n; i++)
{
int val = va_arg(nums, int);
printf("%d", val);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
