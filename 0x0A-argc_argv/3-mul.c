#include <stdio.h>
#include <stdlib.h>
/**
 * main- I multiply two numbers
 * @argc: Length of args
 * @argv: The pointer
 * Return: Default 0
 */

int main(int argc, char *argv[])
{
int i, result, first, secnd;
if (argc == 1 ||argc == 2)
{
printf("Error\n");
return (1);
}
for (i = 0; i < argc; i++)
first = atoi(argv[1]);
secnd = atoi(argv[2]);

result = first * secnd;
printf("%d\n", result);

return (0);
}
