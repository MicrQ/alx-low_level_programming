#ifndef _FILE_IO
#define _FILE_IO

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, const char *text_content);
int append_text_to_file(const char *filename, const char *text_content);

#endif
