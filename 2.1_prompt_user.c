#include <stdio.h>
#include <stdlib.h>

/**
 * prompt_user - prompts user to write their input
 * Return: nothing
 */
void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
