#include <stdio.h>
/**
 *main -entry point
 *
 *Return: always 0
 */
int main(void)

{
int i, j, k, l;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
for (l = 0; l <= 9; l++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((k % 10) + '0');
putchar((l % 10) + '0');

if (i == 9 && j == 9 && k == 9 && l == 9)
continue;

putchar(' ');
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);

}
