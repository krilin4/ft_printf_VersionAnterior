/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:58:55 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:47:54 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion con la que intentamos emular el comportamiento de
** strlcpy()
** El tamaño de retorno es simpre la longitud de la cadena src,
** Y luego copia el valor de la cadena src a dst tantos bytes
** como los que indiquen en size, o hasta que se llege al '\0' de la cadena src.
** The strlcpy() function copies up to size - 1 characters from the
** NUL-terminated string src to dst, NUL-terminating the result.
** The strlcpy() and strlcat() functions return the total length
** of the string they tried to create. For strlcpy() that means
** the length of src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while ((i < size - 1) && src[i] != '\0')
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
	}
	return (ft_strlen(src));
}
