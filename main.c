#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "keywords.h"

/**
 * main - entry point. Main Compiler/Interpreter command.
 *
 * @param argc number of arguments supplied to program, including program name
 * @param argv arguments supplied to program, including program name
 *
 * @return EXIT_SUCCESS (0) on success, EXIT_FAILURE (1) or an exit code on fail
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		fprintf(stderr, "ScriptScript: 'Usage: %s file'\n", argv[0]);
		return (EXIT_FAILURE);
	}
	printf("Running %s...\n", argv[1]);
	return (EXIT_SUCCESS);
}
