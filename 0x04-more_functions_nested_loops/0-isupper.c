#include "main.h"
/**
 *_isupper- check if the input is upper
 *@c: This hold an interger varibale
 *Return: This return the value of 1 or 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (0);
else
return (1);
}
