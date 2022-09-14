#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
char word[] = "_putchar";
char *s;
for (s = &word[0]; *s != '\0'; s++)
{
	_putchar(*s);
}
_putchar('\n');
return (0);
}
