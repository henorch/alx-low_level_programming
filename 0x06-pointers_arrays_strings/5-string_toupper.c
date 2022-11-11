#include "main.h"

/**
 * string_toupper- This convert string to upper
 * @str: The string to change
 * Return : pointer to the converted string
 */

char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}


