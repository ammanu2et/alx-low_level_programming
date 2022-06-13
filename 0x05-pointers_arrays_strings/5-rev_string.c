#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - prints a reversed string.
 * @s: a string to be reversed
 * Return: void and correct
 */
void rev_string(char *s)
{
int a, i;
char *start, *end, temp;

int x = 0;
for (a = 0; s[a]; a++)
{
x++;
}
i = x;
start = s;
end = s;
for (a = 0; a < i - 1; a++)
{
end++;
}

for (a = 0; a < i / 2; a++)
{
temp = *end;
*end = *start;
*start = temp;

start++;
end--;
}
}
