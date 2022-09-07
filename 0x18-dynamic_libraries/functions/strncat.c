/**
 *_strncat - appends a copy of one string to another.
 * @dest: destination
 * @src: source string
 * @n: the integer value of the character to be appended.
 * Return: returns the string of destination
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest + strlen(dest);
while (*src != '\0' && n--)
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
