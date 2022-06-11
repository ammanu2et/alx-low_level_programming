#include <stdio.h>
/**
 * main - is an integer and we will add the multiples of 3 and 5 in i.
 *
 * Return success
 */
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 5 == 0) || (i % 3 == 0))
{
sum = sum + i;
}
}
printf("%d\n", sum);
getchar();
return (0);
}
