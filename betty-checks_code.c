#include <stdio.h>
#include <unistd.h>

/**
 * main - Thsi function checks fro the argument count and vector
 * @argc: variable for argument count
 * @argv: variable pointer to an array of strings
 * Retuen: 0 on succes
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	char buffer[124];
	int len, i;

	/*converting the argc to a string*/
	len = 0;
	do
	{
		buffer[len++] = '0' + argc % 10;
		argc /= 10;
	}

	while
		(argc > 0);
	/*Writting the argc to stdout*/
	write(1, "The argc of this command is", 29);
	write(1, buffer, len);
	write(1, "\n", 1);

	/*Writting the argv to stdout*/
	for (i =0; i < argc; i++)
	{
		write(1, argv[i], sizeof(argv[i]));
		write(1, "\n", 1);
	}

	return(0);
}
