#include "main.h"
#include <stdio.h>
/**
 * *rot13 - encodes the letters in string to the 13th letter.
 * @n: the string to be encoded.
 * Return: the new value of n.
 */
char *rot13(char *n)
{
int count = 0, x;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(n + count) != '\0')
{
for (x = 0; x < 52; x++)
{
if (*(n + count) == alphabet[x])
{
*(n + count) = rot13[x];
break;
}
}
count++;
}

return (n);
}
