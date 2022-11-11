#include "shell.h"

/**
 * get_env - function that gets environment variable
 *
 * @prmEnviron: first node
 * @prmName: envirnment variable name
 * Return: environment variable node
 */
environment_t *get_env(environment_t *prmEnviron, char *prmName)
{
	if (prmEnviron == NULL)
		return (NULL);

	if (_strcmp(prmEnviron->name, prmName) == 0)
		return (prmEnviron);

	return (get_env(prmEnviron->next, prmName));
}
