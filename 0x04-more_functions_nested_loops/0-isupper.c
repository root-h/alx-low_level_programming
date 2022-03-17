#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *_isupper - check if a character is an uppercase in English alphabet
 * Return: 1 if it is uppercase letter , 0 if it not
 *@c : character to test
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);

}
