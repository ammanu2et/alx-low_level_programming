#include "main.h"
#include <string.h>
/**
 * _strlen - counts the string.
 *
 * return: correct
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
