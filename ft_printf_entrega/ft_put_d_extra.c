/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d_extra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernandojosesanchezgarcia <fernandojose    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:50:35 by fesanche          #+#    #+#             */
/*   Updated: 2021/06/25 19:09:45 by fernandojos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	imprimir_numero(long nbr, long modulo, int base_entera, char *base)
{
	long	digito;
	int		res;

	res = 0;
	while (modulo >= base_entera)
	{
		digito = (nbr / modulo);
		nbr = nbr % modulo;
		modulo = modulo / base_entera;
		res += write(1, (base + digito), 1);
	}
	res += write(1, (base + nbr), 1);
	return (res);
}

int	sacar_modulo(long nbr, int base_entera)
{
	long	numero;
	long	modulo;

	modulo = 1;
	numero = nbr;
	while (numero >= base_entera)
	{
		numero = numero / base_entera;
		modulo = base_entera * modulo;
	}
	return (modulo);
}

int	get_base_verificacion(char *base)
{
	int	i;
	int	j;

	i = 0;
	while ((*(base + i)) != 0)
	{
		if (((*(base + i)) == '+') || ((*(base + i)) == '-'))
			return (-1);
		j = 0;
		while (j != i)
		{
			if ((*(base + i)) == (*(base + j)))
				return (-1);
			j++;
		}
		i++;
	}
	if (i <= 1)
	{
		return (-1);
	}
	else
		return (i);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int		base_entera;
	long	modulo;
	long	numero;
	int		res;

	res = 0;
	numero = nbr;
	base_entera = get_base_verificacion(base);
	if (base_entera != (-1))
	{
		if (nbr < 0)
		{
			numero = numero * (-1);
		}
		modulo = sacar_modulo(numero, base_entera);
		res += imprimir_numero(numero, modulo, base_entera, base);
	}
	return (res);
}
