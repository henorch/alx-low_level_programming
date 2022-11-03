#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * is_palindrome- is it palindrome
 * @s: The string
 * Return: int
 */


int is_palindrome(char *s)
{
int index = 0;
int len = find_strlen(s);
if (!(*s))
return (1);

return (check_palindrome(s, len, index));
}

/**
 * check_palindrome- check if it is palindrone
 * @s: The string
 * @len: length of string
 * @index: used to iterate
 * Return: int
 */

int check_palindrome(char *s, int len, int index)
{
if (s[index] == s[len / 2])
return (1);

if (s[index] == s[len - index - 1])
return (check_palindrome(s, len, index + 1));

return (0);

}



/**
 * find_strlen- Length of string
 * @s: The string
 * Return: Lenght
 */

int find_strlen(char *s)
{
int len = 0;
if (*(s + len))
{
len++;
len += find_strlen(s + len);
}
return (len);
}
