/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:53:54 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/09 22:01:55 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion con la que intentamos determinar el comportamiento del strlen()
** size_t strlen(const char *s);
** Nos devuelve la longitud de la cadena que recibimos.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
