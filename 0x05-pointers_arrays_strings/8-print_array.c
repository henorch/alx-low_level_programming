#include "main.h"
#include <stdio.h>
/**
 * print_array- it print n element of array
 * @a: The items
 * @n: size of array
 * Return: void
 */

void print_array(int *a, int n)
{
int i = 0;
do {
printf("%d", *(a + i));
if (i != n - 1)
printf(",");
i++;
}
while (i < n);

printf("\n");
}
