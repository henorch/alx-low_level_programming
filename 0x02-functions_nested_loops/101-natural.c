#include <stdio.h>

/**
 * main- print mutiple of 3 and 5
 *
 * Return: void
 */

void main(void)
{
int i, z = 0;
while (i < 1024)
{
if ((i % 5 == 0) || (i % 3 == 0))
z += i;

i++;
}
printf("%d\n", z);
}

