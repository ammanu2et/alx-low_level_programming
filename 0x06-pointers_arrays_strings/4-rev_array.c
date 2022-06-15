#include "main.h"
/**
 *
 */
void reverse_array(int *a, int n)
int temp, low, high;
{
for (int low = 0, high = n - 1; low < high; low++, high--)
{
int temp = arr[low];
arr[low] = arr[high];
arr[high] = temp;
}
return temp;
}
