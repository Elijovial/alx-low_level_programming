#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_written;
	char *buffer;
	FILE *file;

	if (!filename)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (!file)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	n_read = fread(buffer, sizeof(char), letters, file);
	if (n_read == -1)
	{
		return (0);
	}
	n_written = fwrite(buffer, sizeof(char), n_read, stdout);
	if (n_written == -1 || n_written != n_read)
	{
		return (0);
	}
	free(buffer);
	fclose(file);
	return (n_written);
}
