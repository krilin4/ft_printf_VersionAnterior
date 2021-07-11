#include "ftprintf.h"

int	ft_get_digits_base_x(unsigned long nbr, char *base)
{
	unsigned int	dig_base;
	int				dig_numb;

	dig_numb = 0;
	dig_base = (int)ft_strlen(base);
	while (nbr > dig_base)
	{
		nbr = nbr / dig_base;
		dig_numb++;
	}
	dig_numb++;
	return (dig_numb);
}

int	print_values_xint(int value, t_printf *args)
{
	int		res;
	t_intd	s_int;

	res = 0;
	init_structure_u(&s_int);
	s_int.digits = ft_get_digits_base_x((long)value, "0123456789abcdef");
	get_zerosp(&s_int, args);
	get_zerosw(&s_int, args);
	res += print_w(&s_int, args);
	res += print_p(&s_int);
	res += ft_putnbr_base_u(value, "0123456789abcdef");
	return (res);
}

int	print_values_xint_t(int value, t_printf *args)
{
	int		res;
	t_intd	s_int;

	res = 0;
	init_structure_u(&s_int);
	s_int.digits = ft_get_digits_base_x((unsigned long)value, BASE_HEX);
	get_zerosp(&s_int, args);
	get_zerosw(&s_int, args);
	while (s_int.zeros_p > 0)
	{
		res += ft_putchar('0');
		s_int.zeros_p--;
	}
	res += ft_putnbr_base_u(value, "0123456789abcdef");
	while (s_int.zeros_w > 0)
	{
		res += ft_putchar(' ');
		s_int.zeros_w--;
	}
	return (res);
}

int	ft_put_x( t_printf *args, va_list ap)
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
		res = print_values_xint_t(value, args);
	else
		res = print_values_xint(value, args);
	return (res);
}
