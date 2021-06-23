#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hh, mm;

	for (hh = 0; hh <= 23; hh++)
	{
		for (mm = 0; mm <= 59; m++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(':');
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar('\n');
		}
	}
}
