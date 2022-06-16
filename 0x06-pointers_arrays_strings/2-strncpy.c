#include "main.h"
#include <string.h>
/**
 * _strncpy - copies one string to te other.
 * @dest: the destination of the copied string.
 * @src: the source file of the copied string.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
