#include "main.h"

void close_fd(int fd);
char *create_buffer(char *file);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *			  If file_from does not exist or cannot be read - exit code 98.
 *			  If file_to cannot be created or written to - exit code 99.
 *			  If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int from, to, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	r = read(from, buffer, 1024);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		to = open(argv[2], O_WRONLY | O_APPEND);
		r = read(from, buffer, 1024);
	} while  (r > 0);

	free(buffer);
	close_fd(from);
	close_fd(to);

	return (0);
}

/**
 * close_fd - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
	int close_status;

	close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @fd: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *fd)
{
	char *buffer;

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fd);
		exit(99);
	}
	return (buffer);
}
