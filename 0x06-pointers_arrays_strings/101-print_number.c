#include "main.h"

/**
 * print_number - prints an integer
 * @n: input an integer
 * Return: no return
 */
void print_number(int n)
{
int y, i, x = 1;
if (n < 0)
{
_putchar (45);
i = n * -1;
}
else
{
i = n;
}

y = i;
while (y >= 10)
{
y /= 10;
x *= 10;
}

for (; x >= 1; x /= 10)
{
_putchar (((i / x) % 10) + 48);
}
}
