#include "main.h"
/**
 * main- The entry
 *
 * Return: 0
 */

int main(void)
{
char str[] = "_putchar";
int i = 0;

while (str[i] != '\0')
{
char item = str[i];
_putchar(item);
i++;
}
_putchar('\n');
return (0);
}
