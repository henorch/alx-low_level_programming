#include "main.h"
#include <stdio.h>
/**
 *rev_string- reverse string
 *@s: pointer
 *Return: void
 */

void rev_string(char *s)
{
int i, len = 0;
for (i = 0; *(s+i) != '\0'; i++)
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
printf("%c", *(s+i));
}
}
