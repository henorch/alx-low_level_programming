#include "main.h"
#include <stdio.h>
/**
 *rev_string- reverse string
 *@s: pointer
 *Return: void
 */

void rev_string(char *s)
{
int i, j, len = 0;
char *str, temp;


while (len >= 0)
{
if (s[len] == '\0')
break;
len++;
}
str = s;
for (i = 0; i < (len - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
temp = *(str + j);
*(str + j) = *(str + (j - 1));
*(str + (j - 1)) = temp;
}
}
}
