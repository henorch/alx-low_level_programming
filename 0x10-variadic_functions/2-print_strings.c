#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- I print strings with seperator
 * @seperator: I am comma seperator
 * @n: I am number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list strings;
char *str;
va_start(strings, n);

for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);
if( str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
