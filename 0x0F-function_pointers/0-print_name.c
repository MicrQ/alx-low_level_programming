/**
 * print_name - prints the value of name passed to it using the passed
 *		function pointers
 * @name: item to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
