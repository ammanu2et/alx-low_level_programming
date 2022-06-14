#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *
 */
int _atoi(char *s)
{
unsigned int i = 0, base = 0;
int sign = 1;
while (s[i] == ' ')
{
i++;
}
if (s[i] == '-')
{
sign = -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (base > INT_MAX / 10 || (base == INT_MAX / 10 && s[i] - '0' > 7))
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}
base = 10 * base + (s[i++] - 48);
}
return base * sign;
}
