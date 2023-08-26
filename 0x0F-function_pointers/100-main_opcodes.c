#include <stdio.h>
#include <stdlib.h>

/**
 * printing_opcodes - takes the number of bytes as input and prints the opcodes
 * @bytes: inputed bumber of bytes
 *
 * Return: void
 */
void printing_opcodes(int bytes)
{
	unsigned char *ptr = (unsigned char *)printing_opcodes;
	int i;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);

	}
	printf("\n");
}

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int byte;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	printing_opcodes(byte);

	return (0);
}
