#include "main.h"
/**
 * _isupper - Program that checks for all uppercase characters.
 * @c: Character to be checked for uppercase.
 *
 * Return: 1 if "c" is uppercase or 0 is otherwise.
 */
int _isupper(int c)
{
	int retval;

	if (c >= 65 && c <= 90)
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}

	return (retval);
}
