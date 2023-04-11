#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null-terminated string to write to the file
 * Return: 1(success) or -1(failure)
*/
int create_file(const char *filename, char *text_content)
{
	int fp, i, rwr;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;
	rwr = write(fp, text_content, i);

	if (rwr == -1)
		return (-1);
	close(fp);
	return (1);
}
