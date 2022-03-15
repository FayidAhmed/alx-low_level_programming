#include "maon.h"
/**
 * * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		_putchar(i / 10 + 48);
		_putchar(i % 10 + 48);
		_putchar(':');
		_putchar(j / 10 + 48);
		_putchar(j % 10 + 48);
		_putchar('\n');
	}
}
