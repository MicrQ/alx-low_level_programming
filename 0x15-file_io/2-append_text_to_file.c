#include "main.h"

/**
 * append_text_to_file - appends text on existing file
 * @filename: the name of the file to be modified
 * @text_content: a text to append on the file
 * Return: 1 for success and -1 for any kind of failure
 */

int append_text_to_file(const char *filename, const char *text_content)
{
	int fd, wt, tlen = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd != -1)
	{
		if (text_content != NULL)
		{
			while (text_content[tlen] != '\0')
				tlen++;
			wt = write(fd, text_content, tlen);
			if (wt != -1)
			{
				close(fd);
				return (1);
			}
		}
		close(fd);
	}
	close(fd);
	return (-1);
}
