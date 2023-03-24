#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints chars
 * @arg: variadic argument
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - print an integer
 * @arg: variadic argument
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float
 * @arg: variadic argument
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg: variadic argument
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list ap;
	char *separator = "";
	p_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;

		while (j < 4 && format[i] != *(funcs[j].symbol))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(ap);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(ap);
}
