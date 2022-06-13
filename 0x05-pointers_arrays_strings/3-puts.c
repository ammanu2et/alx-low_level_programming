#include "main.h"
#include <string.h>
/**
 *  - length of a string.
 * @s: a pointer to an int
 * Return: void and correct
 */
void _puts(char *str)
{
int i;
i = 0;
while (*str[i] != '\0')
{
putchar(*str);
str++;
}
}
