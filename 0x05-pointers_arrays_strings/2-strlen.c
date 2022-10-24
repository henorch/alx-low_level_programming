#include "main.h"
#include <string.h>

/**
 * _strlen- length of string
 * @s: the pointer
 * Return: int
 */

int _strlen(char *s)
{
int ln = 0;
while (*s != '\0')
{
ln++;
s++;
}
return (ln);
}	
