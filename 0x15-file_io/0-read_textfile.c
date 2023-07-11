#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_bytes, w;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	n_bytes = read(fd, buf, letters);
	if (n_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, n_bytes);
	if (w != n_bytes)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (n_bytes);
}
