#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *allocate_buffer(char *filename);
void close_descriptor(int fd);
/**
 * allocate_buffer - Allocates 1024
 * @filename: the file to allocate buffer for
 * Return: To allocated memory
 */
char *allocate_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
 * close_descriptor - The function closes file descriptor
 * @fd: the file descriptor
 */
void close_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
	}
}
/**
 * main - The main function for the program
 * @argc: argument count
 * @argv: agument vector
 * Return: On success it is 0
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,  "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = allocate_buffer(argv[2]);
	source_fd = open(argv[1], O_RDONLY);
	read_bytes = read(source_fd, buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source_fd == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_bytes = write(dest_fd, buffer, read_bytes);
		if (dest_fd == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_bytes = read(source_fd, buffer, 1024);
		dest_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_bytes > 0);
	free(buffer);
	close_descriptor(source_fd);
	close_descriptor(dest_fd);
	return (0);
}
