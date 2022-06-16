#include "main.h"
#include <stdio.h>
/**
 *_strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: return the difference of the two strings.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1)
{
if (*s1 != *s2)
{
break;
}
++s1;
++s2;
}
return (*s1 - *s2);
}
