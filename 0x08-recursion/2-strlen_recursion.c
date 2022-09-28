#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: String to check for length.
 * Return: Length of string in integer.
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s != '\0')
	{
		count += 1;
		return (count + _strlen_recursion(s + 1));
	}
	return (count);
}
