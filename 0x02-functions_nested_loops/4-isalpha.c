#include "main.h"
/**
 *_isalpha - check if character is an alphabet character
 *@c: type int character
 *Return: (1) if alphabet is lowercase or uppercase
 *Return: (0) if alphabet is other
 */
int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
return (1);
else
return (0);
}
