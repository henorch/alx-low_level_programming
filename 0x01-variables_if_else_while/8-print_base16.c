#include <stdio.h>
/**
 *main- The entry
 *
 * Return : void
 */
int main(void)
{
int i = 0, j;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
}
