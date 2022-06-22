#include "main.h"
#include <string.h>
/**
 *
 *
 */
void _puts_recursion(char *s)
if (s.length == 0)
{
return(0);
}
{
return (s[s.length - 1] + reverse(s.substr(0, s.length - 1)));
}
