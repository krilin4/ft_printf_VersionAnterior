#include "ftprintf.h"

int	ft_putstr(char *s)
{
	int		res;
	char	*cadena;

	cadena = s;
	if (*cadena == 0)
		return (0);
	res = 0;
	while (*cadena != 0)
	{
		res += ft_putchar(*cadena);
		cadena++;
	}
	return (res);
}

int	ft_putchar(char c)
{
	char	letra;

	letra = c;
	return (write(1, &letra, 1));
}

void	inicializar_struct( t_printf *argumentos )
{
	argumentos->flags = -1;
	argumentos ->width = -1;
	argumentos->precision = -1;
	argumentos->lengh = 0;
	argumentos->conversion = 0;
	argumentos->punto_extra = 0;
	argumentos->def_width = 0;
	argumentos->def_prec = 0;
}

int	parse_get_digits(long width)
{
	int	digitos;

	digitos = 0;
	if (width < 0)
	{
		digitos++;
		width = width * (-1);
	}
	while (width / 10)
	{
		width = width / 10;
		digitos++;
	}
	digitos++;
	return (digitos);
}

char	*read_variables(t_printf *args, char *cadena)
{
	while (*++cadena)
	{
		if (ft_strchr(FLAGS, *cadena))
			args->flags = *cadena++;
		if (ft_isdigit((int)*cadena) && args->flags != '.')
		{
			args->width = ft_atoi(cadena);
			cadena += parse_get_digits((long) args->width);
		}
		if (*cadena == '.')
			args->punto_extra = *cadena++;
		if (ft_isdigit((int)*cadena))
		{
			args->precision = ft_atoi(cadena);
			cadena += parse_get_digits(args->precision);
		}
		if (ft_strchr(CONV, *cadena))
		{
			args->conversion = *cadena;
			return (++cadena);
		}
	}
	return (cadena);
}
