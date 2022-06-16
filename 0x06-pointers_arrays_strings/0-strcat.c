#include "main.h"
#include <string.h>
/**
 * _strcat - appends a copy of one string to another.
 * @dest: destination
 * @src: source string
 * Return: returns the string of destination file.
 */
char *_strcat(char *dest, char *src)
{
char *p = dest + strlen(dest);
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';

return (dest);
}
