#include "ftprintf.h"

int	print_values_xxint(int value, t_printf *args)
{
	int		res;
	t_intd	s_int;

	res = 0;
	init_structure_u(&s_int);
	s_int.digits = ft_get_digits_base_x((long)value, BASE_HEX_U);
	get_zerosp(&s_int, args);
	get_zerosw(&s_int, args);
	res += print_w(&s_int, args);
	res += print_p(&s_int);
	res += ft_putnbr_base_u(value, BASE_HEX_U);
	return (res);
}

int	print_values_xxint_t(int value, t_printf *args)
{
	int		res;
	t_intd	s_int;

	res = 0;
	init_structure_u(&s_int);
	s_int.digits = ft_get_digits_base_x((unsigned long)value, BASE_HEX_U);
	get_zerosp(&s_int, args);
	get_zerosw(&s_int, args);
	while (s_int.zeros_p > 0)
	{
		res += ft_putchar('0');
		s_int.zeros_p--;
	}
	res += ft_putnbr_base_u(value, BASE_HEX_U);
	while (s_int.zeros_w > 0)
	{
		res += ft_putchar(' ');
		s_int.zeros_w--;
	}
	return (res);
}

int	ft_put_xx( t_printf *args, va_list ap)
{
	unsigned int	value;
	int				res;

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
		res = print_values_xxint_t(value, args);
	else
		res = print_values_xxint(value, args);
	return (res);
}
