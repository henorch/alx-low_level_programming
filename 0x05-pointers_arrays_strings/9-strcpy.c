#include "main.h"
#include <stdio.h>
/**
 * _strcpy- This is to copy string from one destination to another
 * @dest: Destination place
 * @src: origin or source
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
int cnt = 0;

while (cnt >= 0)
{
*(dest + cnt) = *(src + cnt);
if (*(src + cnt) == '\0')
break;
cnt++;
}
return (dest);
}
