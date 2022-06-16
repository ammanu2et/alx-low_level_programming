#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 */
char *cap_string(char *n)

int i = 0;
while (a[i] != '\0')
{
if (i == 0)
{
if (n[i] >= 97 && n[i] <= 122)
{
n[i] = n[i] - 32;
continue;
}
if (n[i] == ' ')
{
++i;
if (n[i] >= 97 && n[i] <= 122)
{
n[i] = n[i] - 32;
continue;
}
}
else
{
if (n[i] >= 65 && n[i] <= 90)
n[i] = n[i] + 32
}
}
return (0);
}
