#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string.
 * @str: String to capitalize words.
 * Return: Capitalized sentence.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i != 0)
		{
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == ',' || str[i] == ';' || str[i] == '.'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')' || str[i] == ')'
			|| str[i] == '{' || str[i] == '}')
			{
				if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n'
				|| str[i + 1] == ',' || str[i + 1] == ';' || str[i + 1] == '.'
				|| str[i + 1] == '!' || str[i + 1] == '?' || str[i + 1] == '"'
				|| str[i + 1] == '(' || str[i + 1] == ')' || str[i + 1] == ')'
				|| str[i + 1] == '{' || str[i + 1] == '}')
				{
					if (str[i + 2] >= 97 && str[i + 2] <= 122)
						str[i + 2] = str[i + 2] - 32;
				}
				else
				{
					if (str[i + 1] >= 97 && str[i + 1] <= 122)
						str[i + 1] = str[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}

