#include "holberton.h"
/**
*read_textfile - reads a text file and print it to the PSIX STDOUT
*@filename: the file name
*@letters: number of letter it should read and print
*Return: the number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fdr, fdw;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	fdr = read(fd, buf, letters);
	if (fdr == -1)
	{
		free(buf);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buf, fdr);
	if (fdw == -1 || fdw != fdr)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (fdw);
}
