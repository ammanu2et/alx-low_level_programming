#include "main.h"
#include <string.h>
/**
 *
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest + strlen(dest);
while (*src != '\0' && n--)
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
