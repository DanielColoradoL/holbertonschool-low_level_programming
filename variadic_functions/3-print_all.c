#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *str, *filler = "";

	va_start(ap, format);
	if (format != NULL)
	{
		while (format[i] != 0)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", filler, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%i", filler, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", filler, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char*);
					if (str == NULL)
					{
						printf("%s(nil)", filler);
						break;
					}
					printf("%s%s", filler, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			filler = ", ";
		}
	}
	printf("\n");
	va_end(ap);
}
