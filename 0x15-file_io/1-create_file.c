#include "holberton.h"
/**
*create_file - creates a file
*@filename: the file name
*@text_content: the content of the file
*Return: 1 on success -1 if failed
*/
int create_file(const char *filename, char *text_content)
{
	int fd, fdw, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	fdw = write(fd, text_content, i);
	if (fdw == -1 || fdw != i)
		return (-1);
	close(fd);
	return (1);
}
