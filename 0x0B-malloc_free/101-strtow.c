#include "main.h"
#include <stdlib.h>



int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);



/**
 * word_len - count len
 * @str: The string to be searched.
 * Return: The index marking the end of the initial word pointed to by str.
 */

int word_len(char *str)
{
int cnt = 0, len = 0;
while (*(str + cnt) && *(str + cnt) != ' ')
{
len++;
cnt++;
}
return (len);
}



/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 * Return: The number of words contained within str.
 */

int count_words(char *str)
{
int index = 0, wd = 0, len = 0;
for (index = 0; *(str + index); index++)
len++;
for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
wd++;
index += word_len(str + index);
}
}
return (wd);
}



/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 * Return: If str = NULL, str = "", or the function fails - NULL.
 */

char **strtow(char *str)
{
char **s;
int index = 0, words, w, letters, l;
if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);
s = malloc(sizeof(char *) * (words + 1));
if (s == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;
letters = word_len(str + index);
s[w] = malloc(sizeof(char) * (letters + 1));
if (s[w] == NULL)
{
for (; w >= 0; w--)
free(s[w]);
free(s);
return (NULL);
}
for (l = 0; l < letters; l++)
s[w][l] = str[index++];
s[w][l] = '\0';
}
s[w] = NULL;
return (s);
}
