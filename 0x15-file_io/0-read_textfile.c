#include "main.h"
/**
 * read_textfile - read text file and print
 * @letters: number of letters it should read and print
 * @filename: file name
 *
 * Return: filenameis NULL return 0. write fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}

