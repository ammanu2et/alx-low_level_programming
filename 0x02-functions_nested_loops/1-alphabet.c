#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c = 'a';

do
{
putchar(c);
c++;
}
while (c <= 'z');
putchar('\n');
}
