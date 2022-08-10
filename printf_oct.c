#include "main.h"

/**
 * printf_oct - prints an octal number
 * @val: arguments
 * Return: counter
 */
int printf_oct(va_list val)
{
	int *str;
	int i;
	int index = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		index++;
	}
	index++;
	str = malloc(index * sizeof(int));

	for (i = 0; i < index; i++)
	{
		str[i] = temp % 8;
		temp /= 8;
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(str[i] + '0');
	}
	free(str);
	return (index);
}
