#include <stdio.h>
/**
 *main -entry point
 *
 *Return: always 0
 */
int main(void)

{
int numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}

putchar('\n');

return (0);

}
