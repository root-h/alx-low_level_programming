#include "main.h"
#include <stdio.h>

int main(void)
{
/**
 * main - prints the string "_putchar"
 * Returns: 0 on success.
 */
char y[] = {'_', 'p', 'u', 't', 'c', 'h',
	    'a', 'r'};
int h = 0;
while (y[h] != '\0')
{
_putchar(y[h]);

h++;
}
_putchar('\n');
return (0);
}
