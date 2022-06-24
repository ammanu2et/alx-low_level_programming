#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i = 0;

if (argc > 0)
{
while (i < argc)
{
printf("%d\n", argv[i]);
i++;
}
}
return (0);
}
