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
