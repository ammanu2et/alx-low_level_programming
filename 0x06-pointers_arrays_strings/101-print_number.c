#include "main.h"

/**
 * print_number - prints an integer
 * @n: input an integer
 * Return: no return
 */
void print_number(int n)
{
int y, i, j, x = 1;
if (n < 0)
{
_putchar (45);
i = n * -1;
}

for (y = 0; i >= 10; y++)
{
i = i / 10;
x *=10;
}
for (j = x; j >= 10; j = j / 10)
{
_putchar ((n / j) % 10);
}
}
