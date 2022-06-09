#include "main.h"

/**
 * print_numbers - prints 0123456789\n
 *
 * Return: void
 */


void print_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}

