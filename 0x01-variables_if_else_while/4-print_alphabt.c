#include <stdio.h>
/**
 *main- This print alphabet in lowwercase
 *
 *Return: return the zero default value;
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; ++i)
{
if (i == 'e' || i == 'q')
{
continue;
}
printf("%c", i);
}
printf("\n");
return (0);
}
