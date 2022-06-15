##include "main.h"
/**
 *
 */
char *_strncat(char *dest, char *src, int n)
int n = 0;
{
if (n != 0)
{
while (*dest != 0)
{
dest++;
}
do{
if(0 == (*dest = *src++))break;
dest++;
}
while (--n != 0);
*dest = 0;
}
return dest;
}
