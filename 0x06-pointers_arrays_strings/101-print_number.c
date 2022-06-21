#include "main.h"

/**
 * print_number - prints an integer
 * @i: input an integer
 * Return: no return here
 */
void print_number(int n)
{
int i, j, x = 1;
if (n < 0);
{
_putchar (45);
i = n * -1;
}
else
{
i = n;
}
for (i = 0, i >= 10, i++);
{
i = i / 10;
x *=10;
}
for (j = x , j >= 10, j = j / 10);
{
_putchar ((n / j) % 10);
}

}
