#include  "main.h"
#include <stdio.h>
/**
 * print_to_98- i print to 98
 * @n: starting point
 * Return: void
 */

void print_to_98(int n)
{
int i, j;
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
for (j = n; j > 98; j--)
{
printf("%d, ", j);
}
printf("98\n");
}
