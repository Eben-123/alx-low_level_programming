#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphab;
	int number;

	for (number = 1; number <= 10; number++)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)
		{
			_putchar(alphab);
		}
		_putchar('\n');
	}
}
