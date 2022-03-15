#include "main.h"
#include <stdio.h>

int main(void)
{
/**
 * main - prints the string "_putchar"
 * Returns: 0 on success.
 */
char x[] = {'_', 'p', 'u', 't', 'c', 'h',
	    'a', 'r'};
int d = 0;
while (x[d] != '\0')
{
_putchar(x[d]);

d++;
}
_putchar('\n');
return (0);
}
