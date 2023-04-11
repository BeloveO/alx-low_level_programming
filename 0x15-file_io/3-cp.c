#include <stdio.h>
#include "main.h"
/**
  * main - uses the second function to copy first file into second
  * @argc: argument count
  * @argv: argument vector
  * Return: success
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - copies content of a file to another
  * @src: file to be copied
  * @dest: file destination
  */
void copy_file(const char *src, const char *dest)
{
	int sf, df, rd;
	char buff[1024];

	sf = open(src, O_RDONLY);
	if (!src || sf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	df = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(sf, buff, 1024)) > 0)
	{
		if (write(df, buff, rd) != rd || df == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(sf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sf);
		exit(100);
	}

	if (close(df) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", df);
		exit(100);
	}
}
