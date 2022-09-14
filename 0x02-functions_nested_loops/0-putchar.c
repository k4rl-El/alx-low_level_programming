#include "main.h"

/**
 * main-prints the string "print char"
 *
 * Return: returns 0
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
