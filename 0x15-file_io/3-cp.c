#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * error_message - Print an error message to standard error.
 * @msg: The error message to print.
 * @code: The exit code to use.
 */
void error_message(char *msg, int code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(code);
}

/**
 * main - Copy the content of a file to another file.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int from_fd, to_fd, read_status, write_status;
	char buffer[1024];

	if (ac != 3)
		error_message("Usage: cp file_from file_to", 97);

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		error_message(av[1], 98);

	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		error_message(av[2], 99);

	while ((read_status = read(from_fd, buffer, 1024)) > 0)
	{
		write_status = write(to_fd, buffer, read_status);
		if (write_status != read_status)
			error_message(av[2], 99);
	}

	if (read_status == -1)
		error_message(av[1], 98);

	if (close(from_fd) == -1)
		error_message("Can't close fd", 100);

	if (close(to_fd) == -1)
		error_message("Can't close fd", 100);

	return (0);
}
