#include "main.h"
#include <string.h>
/**
 *
 *
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
return ;
puts("%c", *s);
_puts_recursion (s + 1);
}


