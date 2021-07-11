/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 01:29:44 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/02 22:19:11 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Este programa  se encarga de rellenar un conjungo de bytes en memoria
** indicados con un valor que le estamos indicando, ademas tiene que tener
** esa zona de memoria ya reservada e indicarle el comienzo con un puntero
** void *memset(void *s, int c, size_t n);
** -----------------------
** *S --> Puntero a la posicion de memoria donde empieza
**  c  --> Valor que vamos a escribir en cada byte
**  n --> Espacio que vamos a escribir
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
