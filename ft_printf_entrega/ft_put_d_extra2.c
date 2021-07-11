#include "ftprintf.h"
int	print_p(t_intd	*s_int)
{
	int	res;

	res = 0;
	while (s_int->zeros_p > 0)
	{
		res += ft_putchar('0');
		s_int->zeros_p--;
	}
	return (res);
}

int	print_w(t_intd	*s_int, t_printf	*args)
{
	int	res;

	res = 0;
	while (s_int->zeros_w > 0)
	{
		if (args->flags == '0')
			res += ft_putchar('0');
		else
			res += ft_putchar(' ');
		s_int->zeros_w--;
	}
	return (res);
}

void	get_zerosw(t_intd	*s_int, t_printf	*args)
{
	if (args->def_width == 1)
	{
		while (args->width > (s_int->digits + s_int->zeros_p) + s_int->zeros_w)
			s_int->zeros_w++;
	}
}

void	get_zerosp(t_intd	*s_i, t_printf	*args)
{
	if (args->def_prec == 1)
	{
		while (args->precision > (s_i->digits - s_i->num_neg) + s_i->zeros_p)
			s_i->zeros_p++;
	}
}

void	init_structure(t_intd	*struct_int_ptr, int value)
{
	struct_int_ptr->digits = 0;
	struct_int_ptr->zeros_p = 0;
	struct_int_ptr->zeros_w = 0;
	struct_int_ptr->res = 0;
	if (value < 0)
		struct_int_ptr->num_neg = 1;
	else
		struct_int_ptr->num_neg = 0;
}
