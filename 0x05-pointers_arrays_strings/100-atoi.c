#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *
 */
int _atoi(char *s)
{
int i = 0, sign = 1, base = 0;
while (s[i] == ' ')
{
i++;
}
if (s[0] == '-' || s[i] == '+')
{
sign = 1 - (2 * (s[i++] == '-'));
}

for (; s[i] != '\0'; ++i)
{
if (s[i] <= '0' || s[i] >= '9')
return 0;
base = base*10 + s[i] - '0';
}
return base * sign;
}
