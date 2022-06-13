#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a reversed string.
 * @s: a string to be reversed
 * Return: void and correct
 */
void rev_string(char *s)
{
int a, i;
char *start, *end, temp;

int a = 0;
while (s[a] != '\0')
{
a++;
}
i = a(s);
start = s;
end = s;
for (i = 0; i < a - 1; i++)
end++;

for (i = 0; i < a/2; i++)
{
temp = *end;
*end = *start;
*start = temp;

start++;
end--;
}
}
