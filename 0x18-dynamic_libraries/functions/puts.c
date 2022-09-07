/**
 * _puts - prints a string.
 * @str: a pointer to an int
 * Return: void and correct
 */
void _puts(char *str)
{
char *c;
int x;
c = str;
for (x = 0; c[x]; x++)
{
putchar (c[x]);
}
putchar ('\n');
}
