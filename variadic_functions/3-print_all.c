#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *str, *filler = ", ";

	va_start(ap, format);
	while (format[i] != 0)
	{
		if (format[i + 1] == 0)
			filler = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), filler);
				i++;
				break;
			case 'i':
				printf("%i%s", va_arg(ap, int), filler);
				i++;
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), filler);
				i++;
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
				{
					printf("(nil)");
					i++;
					break;
				}
				printf("%s%s", str, filler);
				i++;
				break;
			default:
				i++;
		}
	}
	printf("\n");
	va_end(ap);
}
