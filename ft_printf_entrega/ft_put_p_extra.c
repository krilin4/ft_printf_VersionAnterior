/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_width.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernandojosesanchezgarcia <fernandojose    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:50:35 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/25 19:18:16 by fernandojos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ftprintf.h"

int	ft_str_trasp(char *cadena)
{
	int	lon;
	int	res;

	res = 0;
	lon = ft_strlen(cadena) - 1;
	while (lon >= 0)
	{
		res += ft_putchar(cadena[lon]);
		lon--;
	}
	return (res);
}

int	ft_putnbr_base_width(long nbr, char *base, int digitos)
{
	int		dig_base;
	int		res;
	int		resto;
	char	*cadena;
	int		i;

	i = 0;
	dig_base = ft_strlen(base);
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		digitos--;
	}
	cadena = malloc(sizeof(char) * (digitos + 1));
	cadena[digitos] = '\0';
	while (i < digitos)
	{
		resto = nbr % dig_base;
		cadena[i] = base[resto];
		nbr = nbr / dig_base;
		i++;
	}
	res = ft_str_trasp(cadena);
	free(cadena);
	return (res);
}
