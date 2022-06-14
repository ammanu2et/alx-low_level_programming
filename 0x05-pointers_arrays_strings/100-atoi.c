#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *
 */
int _atoi(char *s)
{
unsigned int i = 0, base = 0;
int sign = 1;
if (s[i] == ' ')
break;
else if (s[i] == '-')
{
sign *= -1;
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
base = (s[i] - 48) + base * 10;
}
return (base *sign);
}
