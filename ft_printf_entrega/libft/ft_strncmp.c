/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:37:57 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/09 22:40:05 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion que se encarca de comparar 2 cadenas entre ellas,
** comparandolas como maximo el valor "n" indicado o hasta final de cadena.
** return value:
**     -)Diferencia entre valores de s1 y s2
**     -)0 si los caracteres son iguales en los primeros "n"
**     digitos entre s1 y s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	i = 0;
	ptr_s2 = (unsigned char *)s2;
	ptr_s1 = (unsigned char *)s1;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (ptr_s1[i] - ptr_s2[i]);
}
