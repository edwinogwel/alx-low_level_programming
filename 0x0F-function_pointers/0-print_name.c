#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: str name to print
 * @f: pointer to print_name()
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);	/* calls print_name() with arg `name` */
}
