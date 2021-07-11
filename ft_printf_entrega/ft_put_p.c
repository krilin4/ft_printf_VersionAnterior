#include "ftprintf.h"

int	ft_get_digits_base(long nbr, char *base)
{
	int	dig_base;
	int	dig_numb;

	dig_numb = 0;
	dig_base = (int)ft_strlen(base);
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		dig_numb++;
	}
	while (nbr >= dig_base)
	{
		nbr = nbr / dig_base;
		dig_numb++;
	}
	dig_numb++;
	return (dig_numb);
}

int	ft_put_pointer(long addr, t_printf *args, int p_ex, char flags)
{
	int	res;
	int	digits;

	res = 0;
	digits = 0;
	if (!(args->precision == -1 && (p_ex == '.' || flags == '.')))
		digits = ft_get_digits_base(addr, "0123456789abcdef");
	while (args->width > digits + 2)
	{
		res += ft_putchar(' ');
		args->width--;
	}
	res += ft_putstr("0x");
	if (!(args->precision == -1 && (p_ex == '.' || flags == '.')))
		res += ft_putnbr_base_width(addr, "0123456789abcdef", digits);
	return (res);
}

int	ft_put_pointer_t(long addr, t_printf *args, int p_ex, char flags)
{
	int	res;
	int	digits;

	res = 0;
	digits = 0;
	if (!(args->precision == -1 && (p_ex == '.' || flags == '.')))
		digits = ft_get_digits_base(addr, "0123456789abcdef");
	res += ft_putstr("0x");
	if (!(args->precision == -1 && (p_ex == '.' || flags == '.')))
		res += ft_putnbr_base_width(addr, "0123456789abcdef", digits);
	while (args->width > digits + 2)
	{
		res += ft_putchar(' ');
		args->width--;
	}
	return (res);
}

int	ft_put_p( t_printf *args, va_list ap)
{
	long	addr;
	int		res;

	res = 0;
	addr = va_arg(ap, long);
	if (args->flags == '-')
		res = ft_put_pointer_t(addr, args, args->punto_extra, args->flags);
	else
		res = ft_put_pointer(addr, args, args->punto_extra, args->flags);
	return (res);
}
