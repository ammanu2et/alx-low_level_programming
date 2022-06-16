#include "main.h"
#include <stdio.h>
/**
 *
 */
char *cap_string(char *a)
int i;
for (i = 0; a[i] != '\0'; i++)
{
if (i == 0)
{
if (a[i] >= 97 && a[i] <= 122)
{
a[i] = a[i] - 32;
continue;
}
if (a[i] == ' ')
{
++i;
if (a[i] >= 97 && a[i] <= 122)
{
a[i] = a[i] - 32;
continue;
}
}
else
{
if (a[i] >= 65 && a[i] <= 90)
a[i] = a[i] + 32
}
}
return (0);
}
