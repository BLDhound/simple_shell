#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int pid = 0;

	for (int i = 0; i < argc; i++)
	{
		for (pid = fork() != 0)
		{
			printf("Arg%d: %c\n", i, *argv[i]);
			return (0);
		}
	}
	return (0);
}
