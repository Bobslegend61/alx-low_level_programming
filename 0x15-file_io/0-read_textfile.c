#include "main.h"

/**
 * read_textfile - Reads text file and prints to stdout
 * @filename: Filename to read from
 * @letters: Number of letters to read from the file
 *
 * Return: Number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_count;
	ssize_t w_count;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	if (fd == -1 || !buf)
		return (0);
	r_count = read(fd, buf, letters);
	if (r_count == -1)
		return (0);
	w_count = write(STDOUT_FILENO, buf, r_count);
	if (w_count == -1 || (r_count != w_count))
		return (0);
	(void)close(fd);
	return (r_count);
}
