#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1(success) or -1(failure)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, w;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		w = write(fp, text_content, i);

		if (w == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
