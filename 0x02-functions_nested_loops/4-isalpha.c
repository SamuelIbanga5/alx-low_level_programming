#include "main.h"
/**
 * _isalpha - Program to check for alphabetic character.
 * @c - Character or ascii code to be checked.
 *
 * Return: 1 if 'c' is a letter, lowercase or uppercase
 * else 0 if otherwise.
 */
int _isalpha(int c)
{
	int retval;

	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}
	return (retval);
}
