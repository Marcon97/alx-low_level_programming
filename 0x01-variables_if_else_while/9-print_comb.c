#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	int number;

	for (number = 48; number <= 97; number++)
	{
		putchar (number);

	if (number == 97)
	{
		break;
	}
		putchar(',');
		putchar(' ');
	}

                putchar('\n');

        return (0);
}
