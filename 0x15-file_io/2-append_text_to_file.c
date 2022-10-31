#include "main.h"
/**
 * _strlen - FUnction that gets length of string.
 * @str: Pointer to character(string).
 * Return: Length of string.
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - Function that appends text at the end
 * of a file.
 * @filename: Name of the file.
 * @text_content: COntent of the file.
 * Return: 1 if the file exists else -1 if the file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
