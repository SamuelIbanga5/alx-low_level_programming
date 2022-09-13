#include "main.h"
/**
 * _islower - This function checks for lowercase characters.
 * Return: 1 is character is lowercase else 0 if otherwise.
 */
int _islower(int c)
{
	int retval;

	if (c >= 97 && c <= 122)
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}
	return (retval);
}
