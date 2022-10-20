#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main- The main entry for the project
 *
 *Return: default value 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%s","is positive");
}
else if (n == 0)
{
printf("%s","is zero");
}
else
{
  printf("%s","is negative");
}
return (0);
}
