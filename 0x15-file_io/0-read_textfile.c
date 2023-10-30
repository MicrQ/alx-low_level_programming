#include "main.h"

/**
 * read_textfile - reads text from a file and prints it to POSIX
 * @filename: is the name of the file
 * @letters: bytes of characters to be read and printed
 * Return: number of characters printed or 0 for failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wt;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		buf = malloc(sizeof(char) * letters);
		if (buf == NULL)
			close(fd);
		else
		{
			rd = read(fd, buf, letters);
			close(fd);
			if (rd == -1)
				free(buf);
			else
			{
				wt = write(STDOUT_FILENO, buf, rd);
				free(buf);
				if (wt == rd)
					return (wt);
			}
		}
	}
	return (0);
}
