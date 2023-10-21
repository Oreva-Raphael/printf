#include "main.h"

int print_string(va_list ptr)
{
	int len = 0;

	char *str = va_arg(ptr, char *);
	if (!str)
	{
		str = NULL;
	}
	while (str[len])
	{
		len++;
	}
	return (write(1, str, len));
}
