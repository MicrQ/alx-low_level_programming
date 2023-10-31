#include "main.h"

void checker(int fd, char _case, char *filename, int exit_c);
/**
 * main - entry of the program
 * @argc: argument counter
 * @argv: argument vectors
 * Return: 0 for Success
 */

int main(int argc, char **argv)
{
	int fd, fdto, rd, wt, cl_to, cl_from;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	checker(fd, 'o', argv[1], 98);
	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	checker(fdto, 'o', argv[2], 99);
	rd = read(fd, buf, 1024);
	checker(rd, 'r', argv[1], 98);

	wt = write(fdto, buf, rd);
	checker(wt, 'w', argv[2], 99);

	cl_to = close(fdto);
	checker(cl_to, 'c', NULL, 100);
	cl_from = close(fd);
	checker(cl_from, 'c', NULL, 100);

	return (0);
}

/**
 * checker - a function that take ... and performs when the condition
 *		becomes true.
 * @fd: an integer that stores a file descriptor
 * @_case: a case that tells to which task to perform
 * @filename: the name of file to be checked or NULL in case of close()
 * @exit_c: exit code to be passed
 */
void checker(int fd, char _case, char *filename, int exit_c)
{
	if (fd == -1)
	{
		if (_case == 'o' || _case == 'r' || _case == 'w')
		{
			if (exit_c == 98)
			{
				dprintf(STDERR_FILENO,
						"Error: Can't read from file %s\n", filename);
				exit(exit_c);
			}
			else
			{
				dprintf(STDERR_FILENO,
						"Error: Can't write to %s\n", filename);
				exit(exit_c);
			}
		}
		else if (_case == 'c')
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(exit_c);
		}
	}
}















