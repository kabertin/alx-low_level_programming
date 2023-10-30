#include "main.h"

/**
 * _strlen - returns the lengthh of a string
 * @s: the string whose lenght to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int gd;
	ssize_t bytes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	gd = open(filename, O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (gd == -1)
		return (-1);
	if (len)
		bytes = write(gd, text_content, len);
	close(gd);
	return (bytes == len ? 1 : -1);
}
