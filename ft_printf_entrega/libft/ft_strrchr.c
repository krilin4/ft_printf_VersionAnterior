/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:22:40 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:47:44 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Devuelve un puntero de la ultima conincidencia encontrada
** del byte c en la cadena s
** return value:
**     -)Devuelve el valor NULL si no se encunetra en la cadena
** OJO! El caracter '\0' se considera que forma parte de la cadena.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	letra;
	char	*ptr;

	letra = (char)c;
	ptr = (char *)s;
	i = (int)ft_strlen(ptr);
	while (i >= 0)
	{
		if (s[i] == letra)
			return (ptr + i);
		i--;
	}
	return (0);
}
