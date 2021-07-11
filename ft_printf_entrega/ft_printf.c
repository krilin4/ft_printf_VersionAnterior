/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernandojosesanchezgarcia <fernandojose    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 11:10:59 by fesanche          #+#    #+#             */
/*   Updated: 2021/06/25 19:10:25 by fernandojos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	put_values_main(va_list ap, t_printf *args)
{
	if (args->conversion == 'c' || args->conversion == '%')
		return (ft_put_c(args, ap));
	 else if (args->conversion == 's')
		return (ft_put_s(args, ap));
	else if (args->conversion == 'p')
		return (ft_put_p(args, ap));
	else if (args->conversion == 'd' || args->conversion == 'i')
		return (ft_put_d(args, ap));
	else if (args->conversion == 'u')
		return (ft_put_u(args, ap));
	else if (args->conversion == 'x')
		return (ft_put_x(args, ap));
	else if (args->conversion == 'X')
		return (ft_put_xx(args, ap));
	return (0);
}

char	*leer_variables(t_printf	*args, char	*cadena, va_list ap)
{
	char	*start_cadena;

	start_cadena = cadena;
	inicializar_struct(args);
	while (*cadena)
	{
		if (*cadena == '%')
		{	
			inicializar_struct(args);
			cadena = read_variables(args, cadena);
			check_asteriscos(args, start_cadena, ap);
			check_variables(args, start_cadena, cadena);
			return (cadena);
			continue ;
		}
		cadena++;
	}
	return (cadena);
}

void	check_variables(t_printf	*args, char	*cadena, char	*cadena_end)
{
	if (args->width != -1)
		args->def_width = 1;
	if ((args->precision != -1) || (ft_strchr(cadena, '.') != NULL))
		args->def_prec = 1;
	if (ft_strchr(cadena, '-') != NULL && (ft_strchr(cadena, '-') < cadena_end))
		args->flags = '-';
	else if (args->flags == '0')
		if (ft_strchr(CONV_P, *cadena) < cadena_end)
			if (ft_strchr(cadena, '.') != NULL)
				if (ft_strchr(cadena, '.') < cadena_end)
					args->flags = -1;
}

int	limpiar_todo(va_list	*ap, char	*start_cadena, int res)
{
	va_end(*ap);
	free (start_cadena);
	return (res);
}

int	ft_printf( char *ptr_string, ...)
{
	char		*cadena;
	char		*start_cadena;
	int			res;
	t_printf	arg_struc;
	va_list		ap;

	if (!ptr_string)
		return (0);
	res = 0;
	cadena = ft_strdup(ptr_string);
	start_cadena = cadena;
	va_start(ap, ptr_string);
	while (*cadena)
	{
		if (*cadena == '%')
		{
			cadena = leer_variables(&arg_struc, cadena, ap);
			res += put_values_main(ap, &arg_struc);
			continue ;
		}
		res += ft_putchar(*cadena);
		cadena++;
	}
	res = limpiar_todo(&ap, start_cadena, res);
	return (res);
}
