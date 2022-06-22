#include "main.h"

/**
 * factorial - calculates the factorial.
 * @n: the variable.
 * Return: -1 under 0, 1 if 0 or the result.
 */

int factorial(int n)

{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
