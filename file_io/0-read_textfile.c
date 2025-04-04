#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file
 * @letters: number of letter
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, print, wrote;
char *buffer;

buffer = malloc(letters);

if (buffer == NULL)
	return (0);

if (filename == NULL)
	return (0);

fd = open(filename, O_RDWR);

if (fd == -1)
	return (0);

print = read(fd, buffer, letters);

if (print == -1)
	return (0);

wrote = write(STDOUT_FILENO, buffer, print);

if (wrote == -1)
	return (0);

if (close(fd) == -1)
	return (0);

free(buffer);
return (print);
}
