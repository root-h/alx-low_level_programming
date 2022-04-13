#include "function_pointers.h"
/**
  * print_name - printing the name
  * @name: name to print
  * @f: pointer to a function to print a name
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
