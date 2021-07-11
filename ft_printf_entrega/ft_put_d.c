#include "ftprintf.h"

int	print_values_int(int value, t_printf *args)
{
	int		res;
	t_intd	s_int;

	res = 0;
	init_structure(&s_int, value);
	s_int.digits = ft_get_digits_base((long)value, "0123456789");
	get_zerosp(&s_int, args);
	get_zerosw(&s_int, args);
	if (args->flags == '0' && value < 0)
		res += ft_putchar('-');
	res += print_w(&s_int, args);
	if (args->flags != '0' && value < 0)
		res += ft_putchar('-');
	res += print_p(&s_int);
	res += ft_putnbr_base(value, "0123456789");
	return (res);
}

int	print_values_int_t(int value, t_printf *args)
{
	int		res;
	t_intd	s_int;

	res = 0;
	init_structure(&s_int, value);
	s_int.digits = ft_get_digits_base((long)value, "0123456789");
	get_zerosp(&s_int, args);
	get_zerosw(&s_int, args);
	if (value < 0)
		res += ft_putchar('-');
	while (s_int.zeros_p > 0)
	{
		res += ft_putchar('0');
		s_int.zeros_p--;
	}
	res += ft_putnbr_base(value, "0123456789");
	while (s_int.zeros_w > 0)
	{
		res += ft_putchar(' ');
		s_int.zeros_w--;
	}
	return (res);
}

int	ft_put_d( t_printf *args, va_list ap)
{
	int		value;
	int		res;

	res = 0;
	value = va_arg(ap, int);
	if (value == 0)
	{
		if (args->def_prec == 1)
		{
			if (args->precision == 0 || args->precision == -1)
			{
				while (args->width > 0)
				{
					res += ft_putchar(' ');
					args->width--;
				}
				return (res);
			}
		}
	}
	if (args -> flags == '-')
		res = print_values_int_t(value, args);
	else
		res = print_values_int(value, args);
	return (res);
}
