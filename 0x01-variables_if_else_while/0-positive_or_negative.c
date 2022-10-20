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
printf("%s", n "is positive");
}
else if (n == 0)
{
printf("%s", n "is zero");
}
else
{
  printf("%s", n "is negative");
}
return (0);
}
