#include <unistd.h>
#include "main.h"

/**
 * main - function prints _putchar
 * A program that prints _putchar, followed by a new line.
 * Return: 0
 */

int main(void)
{
char *eh = "_putchar";
while (*eh)
{
_putchar(*eh);
eh++;
}
_putchar('\n');

return (0);
}

