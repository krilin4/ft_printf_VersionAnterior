#include "ftprintf.h"

char	*ft_substr_free_mem(char *str, int precision)
{
	char	*aux_str;

	if (precision == -1 )
		aux_str = ft_substr(str, 0, 0);
	else
		aux_str = ft_substr(str, 0, precision);
	free(str);
	str = aux_str;
	return (str);
}

int	print_values_string(char	*cadena, int width)
{
	int	res;
	int	len;

	res = 0;
	len = ft_strlen(cadena);
	res += ft_putstr(cadena);
	while (width - len > 0)
	{
		res += ft_putchar(' ');
		len++;
	}
	return (res);
}

int	print_values_string_t(char	*cadena, int width)
{
	int	res;
	int	len;

	res = 0;
	len = ft_strlen(cadena);
	while (width - len > 0)
	{
		res += ft_putchar(' ');
		len++;
	}
	res += ft_putstr(cadena);
	return (res);
}

int	ft_put_s( t_printf *args, va_list ap)
{
	char	*str;
	int		res;

	res = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
		str = ft_strdup("(null)");
	else
		str = ft_strdup(str);
	if (args->precision != -1 || args->punto_extra == '.' || args->flags == '.')
		str = ft_substr_free_mem(str, args->precision);
	if (args -> flags == '-')
		res = print_values_string(str, args->width);
	else
		res = print_values_string_t(str, args->width);
	free(str);
	return (res);
}
