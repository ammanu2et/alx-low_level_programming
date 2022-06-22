#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
return;
printf("%c", *s);
printf("\n");
_puts_recursion(s + 1);
}


