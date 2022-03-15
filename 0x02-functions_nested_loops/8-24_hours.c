#include "main.h"
/**
 * * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 24; i++)
	{
		_putchar(i / 10 + 48);
		_putchar(i % 10 + 48);
		_putchar(':');
		_putchar(j / 10 + 48);
		_putchar(j % 10 + 48);
		_putchar('\n');
		j++;
	}
}
