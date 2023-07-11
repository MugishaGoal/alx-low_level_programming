#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_bytes = 0, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[n_bytes] != '\0')
			n_bytes++;
	}
	w = write(fd, text_content, n_bytes);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
