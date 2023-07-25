#include "main.h"

/**
* convert - converter functiion, a clone a of itoa
*@num: number
*@base: base
*@flags: argument flags
*@params: paramater struct
*
*return: string
*/
char *convert(long int num, int base, int flags, params_t *params)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;
	(void)params;

	if (!(flags & CONVERT_UNSIGNED) && NUM < 0)
	{
		n = -num;
		sign = '-';

	}
	array = flags & CONVERT_LOWERCASE ? "123456789abcdef" : "123456789ABCDEF"
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

/**
* print_unsigned -prints insigned integer numbers
*@ap: argument pointer
*
*@params: bytes printed
*/
int print_unsigned(va_list ap, params_t *params)
{
	unsigned long l;

	if (params - < lmodifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if  (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	params->unsign = 1;
	return (print number(convert(1, 10, CONVERT_UNSIGNED, PARAMS), PARAMS));
}



/**
*print_address - prints address
*@ap: argument pointer
*@params: the parameters struct
*
*return: bytes printed
*/
int print_address(va_list ap, params_t *params)
{
	unsigned long int n = va_arg(ap, insigned long int);
	char *str;

	if (!n)
		return (_puts("(nil)"));

	str = convert(n, 16, CONVERT_UNSOGNED | CONVERT_LOWERCASE, PARAMS);
	*--str = 'X';
	*--str = '0';
	return (print_number(str, params));
}
