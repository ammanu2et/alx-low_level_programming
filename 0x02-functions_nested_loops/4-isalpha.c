#include "main.h"
/**
 * main = function
 *return 1 if its true
 *return 0 not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
