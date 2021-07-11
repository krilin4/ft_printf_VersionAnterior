#include "ftprintf.h"

void	sacar_valor_p(t_printf	*args, va_list ap)
{
	int	value;

	value = (int)va_arg(ap, int);
	args->precision = value;
}

int	sacar_valor_w(t_printf	*args, va_list	ap)
{
	int	value;

	value = (int)va_arg(ap, int);
	if (value < 0)
	{
		args->flags = '-';
		args->width = value * -1;
	}
	else
		args->width = value;
	return (1);
}

char	*check_asteriscos(t_printf	*args, char	*cadena, va_list ap)
{
	int		def_w;

	def_w = 0;
	if (args->conversion == '%')
		return (NULL);
	if (ft_strchr(FLAGS_R, *cadena) != NULL)
		args->flags = *cadena++;
	if (*cadena == '*')
	{
		def_w = sacar_valor_w(args, ap);
		cadena++;
	}	
	while (*cadena)
	{		
		if (*cadena == '.')
			def_w = 1;
		else if (*cadena == '*' && (def_w == 1))
			sacar_valor_p(args, ap);
		else if (*cadena == '*' && (def_w == 0))
			def_w = sacar_valor_w(args, ap);
		cadena++;
	}
	return (cadena);
}
