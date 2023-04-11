#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of file
 * @letters: number of letters function should read and print
 * Return: actual number of letters function could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	fp = open(filename, 0_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = read(fp, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(fp);

	return (wr);
}
