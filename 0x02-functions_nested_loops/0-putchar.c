#include "main.h"
/**
 * main - Program Entry point.
 * Description: This program prints "_putchar" without
 * the standard library functions printf, puts etc...
 * Return: Always 0 Success.
 */
int main(void)
{
	char string[] = "_putchar";
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
