#include "main.h"

/**
 * read_textfile - reads text from file and prints
 * it to the POSIX standard output
 * @filename: file name
 * @letters: bytes to read
 *
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int kk;
	ssize_t nrd, nw;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (kk == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(kk, buf, letters);
	nw = write(STDOUT_FILENO, buf, nrd);

	close(kk);

	free(buf);

	return (nw);
}
