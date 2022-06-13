#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a reversed string.
 * @s: a string to be reversed
 * Return: void and correct
 */
void print_rev(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
for (a = a - 1; a >= 0; a--)
{
putchar (s[a]);
}
putchar ('\n');
}
