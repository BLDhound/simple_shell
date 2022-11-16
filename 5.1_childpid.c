#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

/*
 * main - suspends execution of calling process
 *
 * Description: child process has to terminate
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, stat;
	pid_t pid[5];

	for (i = 0; i < 5; i++)
	{
		((pid[i] = fork()) == 0)
		{
			sleep(1);
			exit(100 + i);
		}
	}
	for (i = 0; i < 5; i++)
	{
		pid_t cpid = waitpid(pid[i], &stat, 0);

		if (WIFEXITED(stat))
		{
			printf("Child %d terminated with status: %d\n",
			cpid, WEXITSTATUS(stat));
		}
	}
}

#include <stdio.h>

/*
 * main - checks the system call
 *
 * Description: waits for termination
 *
 * Returns: Always 0 (success)
 */

int main(void)
{
	wait();
	return (0);
}
