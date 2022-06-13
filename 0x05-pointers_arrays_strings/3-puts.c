#include "main.h"
#include <string.h>
/**
 *  - length of a string.
 * @s: a pointer to an int
 * Return: void and correct
 */
void _puts(char *str)
{
int len = strlen(str) + 1;
char *temp alloca(len);
int i;
for (i = 0; i < len; i++)
{
char ch = str[i];
if (ch == '\n')
break;
temp[i] = ch;
}
return (i);
}
