/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:54:24 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:34:29 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion que se encarga de reservar un espacio de memoria
** y crear una copia de la cadena  "s" que pasamos como argumento.
** La reserva de memora se hace con malloc()
** REturn value:
**     -)Puntero a la posicion de  memoria donde se encuentra la otra cadena
**     -)Null si no se ha podido realizar la copia.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;
	int		i;

	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
