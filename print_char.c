#include "main.h"

int print_char(va_list ptr)
{
	return (_putchar(va_arg(ptr, int)));
}
