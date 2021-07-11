#include "ftprintf.h"

int	print_values_char(char value, int width, char padding)
{
	int	res;

	res = 0;
	while (width > 1)
	{
		if (padding == '0')
			res += ft_putchar('0');
		else
			res += ft_putchar(' ');
		width--;
	}
	res += ft_putchar(value);
	return (res);
}

int	ft_max(int width, int precision)
{
	if (width >= precision)
		return (width);
	return (precision);
}

int	print_values_char_t(char value, int width)
{
	int	res;

	res = 0;
	res += ft_putchar(value);
	while (width > 1)
	{
		res += ft_putchar(' ');
		width--;
	}
	return (res);
}

int	ft_put_c( t_printf *args, va_list ap)
{
	char	value;
	int		res;
	int		precision;

	if (args->conversion == '%')
		value = '%';
	else
		value = (char)va_arg(ap, int);
	precision = ft_max(args->width, args->precision);
	if (args -> flags == '-')
		res = print_values_char_t(value, precision);
	else
		res = print_values_char(value, precision, args->flags);
	return (res);
}
