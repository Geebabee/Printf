#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: the length of the string
 */
int _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		len++;
	}
	_putchar('\n');
	len++;
	return (len);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
