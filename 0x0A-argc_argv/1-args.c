#include <stdio.h>
/**
 * main- I print my name
 * @argc: The length of arg
 * @argv: The arg pointer
 * Return: defauklt zero
 */

int main(int argc, char *argv[])
{
int i;
if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (i = 0; *argv; i++, argv++);
printf("%d\n", i - 1);
}
return (0);
}
