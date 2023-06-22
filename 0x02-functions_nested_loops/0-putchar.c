#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_putchar - Print the word _putchar
 *
 * Description: Check dir for README
 */

void print_putchar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: Serves as the entry point of the program.
 *
 * Return: Always0 (Success)
 *
 */

int main(void)
{
	print_putchar();
	return (0);
}

