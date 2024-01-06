#include "shell.h"

/**
 * create_envi - Creates an array of Enviroment Variables
 * @envi: Array to store Enviroment Variables
 */

void create_envi(char **envi)
{
	int j;

	for (j = 0; environ[j]; j++)
		envi[j] = _strdup(environ[j]);
	envi[j] = NULL;
}

/**
 * free_env - Frees the memory of the created Enviroment Variables array
 * @env:  Array of Environment variables
 */
void free_env(char **env)
{
	int j;

	for (j = 0; env[j]; j++)
	{
		free(env[j]);
	}
}
