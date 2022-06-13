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
if (*s)
{
print_rev(s+1);
printf ("%c", *s);
}
printf ('\n');
}
