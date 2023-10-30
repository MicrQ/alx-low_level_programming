#include "main.h"

/**
 * create_file - creates a file with content or without content
 * @filename: name of a file to be created
 * @text_content: content of the file
 * Return: 1 for success and -1 for any kind of failure
 */

int create_file(const char *filename, const char *text_content)
{
	int fd, i, wt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd != -1)
	{
		if (text_content == NULL)
			text_content = "";
		i = 0;
		while (text_content[i] != '\0')
			i++;
		wt = write(fd, text_content, i);
		close(fd);
		if (wt != -1)
			return (1);
	}
	return (-1);
}
