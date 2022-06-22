#include "main.h"
/**
 * _strlen_recursion - the length of the string.
 * @s: the string to be measured.
 * Return: return 0.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
