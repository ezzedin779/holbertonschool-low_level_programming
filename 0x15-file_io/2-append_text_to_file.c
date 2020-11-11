#include "holberton.h"
/**
*append_text_to_file - appends text at the end of a file
*@filename: the file name
*@text_content: the content of the file
*Return: 1 on success -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	fdw = write(fd, text_content, i);
	if (fdw == -1 || fdw != i)
		return (-1);
	close(fd);
	return (1);
}
