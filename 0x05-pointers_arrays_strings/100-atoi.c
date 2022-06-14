#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 */
int _atoi(char *s)
{
int i, sign = 1, base = 0;
while (s[i] == ' ')
{
i++;
}
if (s[i] =='-' || s[i] == '+')
{
sign = 1 -2 * s[i++] == '-');
}

for (int i = 0; s[i] != '\0'; ++i)
res = res * 10 + s[i] - '0';
return res;
}
