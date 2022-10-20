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
printf("%c", i);
}
for (i = 'A'; i <= 'Z'; ++i)
{
printf("%c", i);
}
printf("\n");
return (0);
}
