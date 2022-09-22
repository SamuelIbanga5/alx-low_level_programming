#include "main.h"
/**
 * string_toupper - Function that changes all lowercase letters
 * of a string to uppercase.
 * @str: String to convert.
 *
 * Return: Uppercase string.
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
