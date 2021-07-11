/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:19:36 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/02 21:56:21 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion que se encarga de convertir a numero una cadena de
** caracteres,si se detecta algun caracter que no es numerico se deja de leer.
** Salvo en el caso de simbolos + o - al comienzo del array.
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		contador;
	char	signo;

	i = 0;
	signo = 1;
	contador = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		||nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
	{
		i++;
	}
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			signo = -1;
		i++;
	}
	while (nptr[i] != '\0' && ((nptr[i] <= 57) && (nptr[i] >= 48)))
	{
		contador = (nptr[i] - 48) + (contador * 10);
		i++;
	}
	return (contador * signo);
}
