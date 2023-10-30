#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: Name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, text_length;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	for (text_length = 0; text_content[text_length] != '\0'; text_length++)
		continue;

	write_status = write(file_descriptor, text_content, text_length);

	close(file_descriptor);

	if (write_status == text_length)
		return (1);
	return (-1);
}
