#include "main.h"

/**
 * reverse_array-I
 * @a: The string to reverse
 * @n: length of string
 * Retrurn: void
 */


void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
