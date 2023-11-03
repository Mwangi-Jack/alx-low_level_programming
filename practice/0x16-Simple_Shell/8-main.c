#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Description: Function to get status of a file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always Success (0)
*/

int main(int argc, char *argv[])
{
	char *pathname;

	struct stat file_stat;


	if (argc < 2)
	{
		puts("NOT FOUND");
	}

	pathname = argv[1];

	if (stat(pathname, &file_stat) == 0)
	{
		printf("File size: %ld bytes\n", file_stat.st_size);
		printf("File permissions: %o\n", file_stat.st_mode & 0777);
		printf("Last access time: %s", ctime(&file_stat.st_atime));
		printf("Last modification time: %s\n", ctime(&file_stat.st_mtime));
	} else
	{
		perror("stat");
	}

	return (0);
}
