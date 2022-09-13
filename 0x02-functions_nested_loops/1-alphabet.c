#include "main.h"
/**
 * main - Program Entry point.
 * Description: This program prints all the alphabets
 * in lowercase followed by a new line without using standard
 * library functions.
 * Return: Always 0 Success.
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
	return;
}
