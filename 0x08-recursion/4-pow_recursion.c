#include "main.h"
/**
 * _pow_recursion - calculates the power of a number.
 * @x: the base
 * @y: the power
 * Return: -1 if less than y = 0, 1 if y =0 and the result...
 */
int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
if (y < 0)
{
return (-1);
}
else
{
return (1);
}
}
