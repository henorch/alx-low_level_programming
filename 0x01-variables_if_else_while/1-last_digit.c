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
printf("%s", "Last string of");
printf("n");
if (n > 5)
{
printf("%s", "is" n "and is grreater than 5\n");
}
else if (n == 0)
{
printf("%s", "is" n "and is zero\n");
}
else if (n < 6 && n != 0)
{
printf("%s", "is" n "and is less than 6 and not 0\n");
}
return (0);
}
