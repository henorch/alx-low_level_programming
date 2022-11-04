#include <stdio.h>
#include "main.h"

/**
 * main- I print my name
 * @argc: The length
 * argv: The pointer
 * Return: default 0
 */

int main(int argc, char *argv[])
{
int i = 0;
for (i  = 0; i < argc; i++)
printf("%s\n", argv[0]);

return (0);
}

