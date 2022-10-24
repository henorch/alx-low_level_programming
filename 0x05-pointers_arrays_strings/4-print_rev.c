#include "main.h"
/**
 * print_rev- print in reverse
 * @s: the pointer
 * Return: void
 */

void print_rev(char *s)
{
int i, cnt;
while (*s != '\n')
{
cnt++;
s++;
for (
