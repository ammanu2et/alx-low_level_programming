#include <stdio.h>
/**
 *main -entry point
 *
 *Return: always 0
 */
int main(void)

{
int single_number;

for (single_number = 48; single_number <= 57; single_number++)
{
putchar(single_number);

if (single_number == 57)
{
break;
}
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);

}
