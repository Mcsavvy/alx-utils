#include <stdio.h>

/**
 * main - Entry Point
 *
 * this script prints the integer value
 * of ascii characters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	printf("Input an ASCII character then press enter");
	printf(" to get the integer value.\n");
	printf("Use ^D (Ctrl+D) to exit\n");
	printf("\n$ ");

	do {

		c = getchar();
		if (c == -1)
		{
			printf("[closed]\n");
			break;
		}
		if (c == 10)
		{
			printf("\n$ ");
		}
		else
		{
			printf("The ASCII value of '%c' is %d\n", c, c);

		}


	} while (c != EOF);

	return (0);
}
