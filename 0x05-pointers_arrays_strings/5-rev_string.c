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
a = 0;
while (s[a] != '\0')
{
a++;
}
for (i = 0; i < a - 1; i++)
{
putchar (s[i]);
}
}
