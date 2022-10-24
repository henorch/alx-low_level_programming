#include "main.h"
/**
 * swap_int- Pointer value swap
 *@a: first pointer
 *@b: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
