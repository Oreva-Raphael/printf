#include "main.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				if (!str)
					str = "(null)";
				write(1, str, strlen(str));
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
			}
		}
		else
		{
			write(1, format, 1);
		}

		format++;
	}

	va_end(args);

	return (0);
}
