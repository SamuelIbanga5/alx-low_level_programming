#include "main.h"
/**
 * length - Checks for the length of a string.
 * @s: String to check.
 * Return: Length of the string.
 */
int length(char *s)
{
	if (*s != '\0')
	{
		return (1);
	}
	else
	{
		return (1 + length(s + 1));
	}
}
/**
 * check_palindrome - Checks to see if string is a palindrome.
 * @x: left hand index.
 * @y: right hand index.
 * @p: Possible palindrome.
 * Return: 1 if palindrome and 0 if not.
 */
int check_palindrome(int x, int y, char *p)
{
	if (x >= y)
	{
		return (1);
	}
	else if (p[x] != p[y])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(x + 1, y - 1, p));
	}
}
/**
 * is_palindrome - Function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: String to check for palindrome.
 * Return: 1 is string is palindrome else 0.
 */
int is_palindrome(char *s)
{
	int i;

	i = length(s) - 1;
	return (check_palindrome(0, i, s));
}
