/**
 * _strlen - length of a string.
 * @s: a pointer to an int
 * Return: void and correct
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
