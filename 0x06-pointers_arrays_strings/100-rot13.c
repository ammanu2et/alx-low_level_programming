#include "main.h"
#include <stdio.h>
/**
 * *rot13 - encodes the letters in string to the 13th letter.
 * @n: the string to be encoded.
 * Return: the new value of n.
 */
char *rot13(char *n)
{
if (n >= 65 && n <= 90)
{
n = 65 + (n - 65 + 13) % 26
}
else if (n >= 97 && n <= 122)
{
n = 97 + (n - 97 + 13) % 26
}
return (n);
}
