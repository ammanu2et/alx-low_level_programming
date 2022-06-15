##include "main.h"
/**
 *
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
i = 0;
while (dest_len[i] != '\0'; i++)

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len[i] + 1] = src[i];
dest[dest_len[i]] = '\0';
return dest;
}
