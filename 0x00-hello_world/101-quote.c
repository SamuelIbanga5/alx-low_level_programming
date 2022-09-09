#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char string [] = "and the piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen(string));
	return (1);
}
