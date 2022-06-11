#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: int type number
 * Return: empty output
 */
void print_times_table(int n)
{
int j, i, d;
if (n > 15 || n < 0)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{

d = i * j;
if (d > 99)
{
_putchar(d / 100 + '0');
_putchar((d / 10 % 10) + '0');
_putchar(d % 10 + '0');
}
else if (d > 9)
{
_putchar(' ');
_putchar(d / 10 + '0');
_putchar(d % 10 + '0');
}
else if (j != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(d + '0');
}
else
_putchar(d + '0');

if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');

}
}
