#include "main.h"
/**
 * main - Program Entry point.
 * print_alphabet - Prints alphabet in lowercase using only _putchar.
 * Return: None.
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
