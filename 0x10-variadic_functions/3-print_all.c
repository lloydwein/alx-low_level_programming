#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *tmp;
	char *sep = "";

	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			tmp = va_arg(args, char *);
			if (tmp == NULL)
				tmp = "(nil)";
			printf("%s%s", sep, tmp);
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
