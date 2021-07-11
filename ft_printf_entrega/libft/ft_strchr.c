/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:16:58 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:34:21 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion que devuelve un puntero a la primera ocurrencia
** de la letra "c"(byte) en el array de char s.
** El '\0' se considera parte de la cadena,
** por lo tanto si c = '\0' devolver un puntero a ese valor.
** Si no hay conincidencia devuelve null
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	letra;
	char	*ptr;

	ptr = (char *)s;
	letra = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == letra)
			return (ptr + i);
		i++;
	}
	if (letra == '\0')
		return (ptr + i);
	return (0);
}
