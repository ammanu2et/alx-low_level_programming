#include "main.h"
#include <stdio.h>

/**
 *
 */
void reset_to_98(int *n);
{
int n;

printf ("n = %p\n", &n);
reset_to_98(&n);
printf ("n = %d\n", n);
return (0);
}