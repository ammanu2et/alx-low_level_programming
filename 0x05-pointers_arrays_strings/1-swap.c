#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps two integers.
 * @n: the variable that helps the swap.
 * @a: first variable.
 * @b: second variable.
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
