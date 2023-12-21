#include "shell.h"

/**
 * print_error - Displays error message
 * @input: Input received from the user
 * @counter: Count of shell loop
 * @argv: Arguments before the program starts (argv[0] == Shell Program Name)
 */

void print_error(char *input, int counter, char **argv)
{
    char *er;

    PRINT(argv[0]);
    PRINT(": ");
    er = _itoa(counter);
    PRINT(er);
    free(er);
    PRINT(": ");
    PRINT(input);
    PRINT(": not found\n");
}

/**
 *  _prerror - Prints custom Error
 * @argv: Arguments before the program starts (argv[0] == Shell Program Name)
 * @c: Error Count
 * @cmd: Array of parsed command strings
 */

void _prerror(char **argv, int c, char **cmd)
{
    char *er = _itoa(c);

    PRINT(argv[0]);
    PRINT(": ");
    PRINT(er);
    free(er);
    PRINT(": ");
    PRINT(cmd[0]);
    PRINT(": Illegal number: ");

    /* Convert cmd[1] (assuming it's an integer) to string before printing */
    er = _itoa(atoi(cmd[1])); 
    PRINT(er);
    free(er);

    PRINT("\n");
}

/**
 * error_file - Prints custom Error
 * @argv: Arguments before the program starts (argv[0] == Shell Program Name)
 * @c: Error Count
 */
void error_file(char **argv, int c)
{
    char *er = _itoa(c);

    PRINT(argv[0]);
    PRINT(": ");
    PRINT(er);
    free(er);
    PRINT(": Can't open ");
    PRINT(argv[1]);
    PRINT("\n");
}
