#include "main.h"
/**
 * main - Program Entry point.
 * print_alphabet - This program prints all the alphabets
 * in lowercase followed by a new line without using standard
 * library functions.
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
