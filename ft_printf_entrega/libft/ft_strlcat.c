/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:06:01 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:45:24 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion con la cual vamos a emular el behavior de strlcat() del sistema.
** Funcion que concatena 2 cadenas,
** El valor de retorno:
**     -Size = 0 --> Len(src) --> Tamanio de src
**     -Size < len(Dst) --> len(Src) + size;
**     -size > len(dst) --> len(src) + len(dst);
** La funcion hace lo siguiente:
** concatena en la cadena dst el valor de src, mientras que se cumpla que:
**     -)NO se llega al final de src --> src[x] != '\0'
**     -)Mientras que el tamanio de la cadena dst conforme
**     le vamos concatenando valores sea menor que size -
** Al salir del bucle le ponemos un '\0' para asegurarnos que la
** cadena esta bien terminada.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (len_src);
	else if (size < len_dst)
		len_src = len_src + size;
	else
		len_src = len_src + len_dst;
	while (src[i] != '\0' && ((len_dst + i) < (size - 1)))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src);
}
