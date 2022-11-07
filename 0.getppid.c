#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("kaila %u\n", my_pid);
	my_pid = getpid();
	printf("mwangi %u\n", my_pid);
	return (0);
}
