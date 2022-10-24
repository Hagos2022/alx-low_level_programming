#include "main.h"

/**
 * print_rev - minic the stdio version of puts
 * @s: the value to process to the stdout in reverse.
 */

void print_rev(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
i--;
while (s[i] != '\0')
{
_putchar(s[i--]);
}
_putchar('\n');
}
