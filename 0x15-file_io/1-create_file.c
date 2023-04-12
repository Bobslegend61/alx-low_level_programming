#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: content to write to the file
 *
 * Return: 1 if success, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w_count;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	w_count = write(fd, text_content, (sizeof(char) * strlen(text_content)));
	if (w_count == -1)
		return (-1);
	(void)close(fd);
	return (1);
}
