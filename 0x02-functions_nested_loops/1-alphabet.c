#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
char c = 'a';

do {
_putchar(c);
c++;
}
while (c <= 'z');
putchar('\n');
}