#include "main.h"
/**
 *puts2 - print every character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means it is correct
 */

void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
putchar (str[a]);
}

putchar ('\n');
}
