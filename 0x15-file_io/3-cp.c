#include "main.h"

/**
 * main - Copy file from one file to another
 * @argc: Argument count
 * @argv: Arguments pointer
 *
 * Retune: 0
 */
int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;
	char *buffer;
	ssize_t r_count, w_count, c_fd_from, c_fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	r_count = read(fd_from, buffer, (sizeof(char) * BUFFER_SIZE));
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open to file %s\n", argv[2]);
		exit(99);
	}
	while (r_count == BUFFER_SIZE)
	{
		w_count = write(fd_to, buffer, (sizeof(char) * BUFFER_SIZE));
		if (w_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r_count = read(fd_from, buffer, (sizeof(char) * BUFFER_SIZE));
	}
	if (r_count == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
	}
	c_fd_from = close(fd_from);
	c_fd_to = close(fd_to);
	if (c_fd_from == -1 || c_fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d", c_fd_from == -1 ? fd_from : fd_to);
	}
	free(buffer);
	return (0);
}
