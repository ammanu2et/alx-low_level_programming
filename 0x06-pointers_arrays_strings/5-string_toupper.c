#include "main.h"
#include <stdio.h>
/**
 * *string_toupper -changes lower case letters to upper case
 * @n: the character variable to be changed.
 * Return: the value of changed.
 */
char *string_toupper(char *n)
{
int i = 0;
while (n[i] != '\0')
{
if(n[i] >= 97 && n[i] <= 122)
{
n[i] = n[i] - 32;
}
++i;
}
return (n);
}
