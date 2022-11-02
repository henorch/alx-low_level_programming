#include "main.h"

int get_sqrt(int num, int root);
/**
 * _sqrt_recursion- the natural square root
 * @n: The number
 * Return: -1 if no natural square root else value
 */
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);

if (n == 1)
return (1);

return (get_sqrt(n, root));
}





/**
 * get_sqrt- get the square
 * @num: the number
 * @root: The root
 * Return: if divisible
 */
int get_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);

if (root == num / 2)
return (-1);

return (get_sqrt(num, root + 1));
}


