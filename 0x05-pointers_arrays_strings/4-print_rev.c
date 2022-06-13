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
int i, len, temp;
len = _strlen(s);

for (i = 0; i < len/2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len -i - 1] = temp;
}
printf ('\n');
}
