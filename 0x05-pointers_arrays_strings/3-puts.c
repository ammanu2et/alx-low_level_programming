#include "main.h"
#include <string.h>
/**
 *  - length of a string.
 * @s: a pointer to an int
 * Return: void and correct
 */
void _puts(char *str)
{
char *c;
int x;

c = str;
for (x = 0; c[x]; x++)
{
_putchar (c[x]);
}
_putchar('\n');
}
