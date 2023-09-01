#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Description: Prints the number of arguments passed into the program.
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
