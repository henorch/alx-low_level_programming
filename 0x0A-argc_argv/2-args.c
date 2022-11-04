#include <stdio.h>

/**
 * main- I print number of argument
 * @argc: length of argument
 * @argv: array of arg
 * Return: defalt 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
