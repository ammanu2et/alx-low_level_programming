#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts - prints a string.
 * @str: a pointer to an int
 * Return: void and correct
 */
void print_rev(char *s)
{
int i, len;
char *start, *end, temp;

len = strlen(s);
start = st;
end = st;

for (i = 0; i < len - 1; i++)
end++;

for(i = 0; i < len/2; i++)
{
temp = *end;
*end = *start;
*start = temp;

start++;
end--;
}
putchar ('\n');
}
