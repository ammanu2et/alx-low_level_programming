#include "main.h"
/**
 *
 */
void reverse_array(int *a, int n)
{
int *p;

for (int i = 0; i < n; i++)
{
p[n - 1 - i] = a[i];
}
for (int i = 0; i < n; i++)
{
a[i] = p[i];
}
return (0);
}
