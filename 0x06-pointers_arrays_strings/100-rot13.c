#include "main.h"
#include <stdio.h>
/**
 *
 */
char *rot13(char *n)
{
if (n >= 65 && n <= 90)
{
n = 65 + (n - 65 + 13) % 26
}
else if (n >= 97 && n<= 122)
{
n = 97 + (n - 97 + 13) % 26
}
return (n);
}
