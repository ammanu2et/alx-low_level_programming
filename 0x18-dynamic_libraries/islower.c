/**
 *_islower - check if character is an alphabet character
 *@c: type int character
 *Return: (1) if alphabet is, (0) if other
 */
int _islower(int c)
{
if ((c >= 97 && c <= 122))
return (1);
else
return (0);
}
