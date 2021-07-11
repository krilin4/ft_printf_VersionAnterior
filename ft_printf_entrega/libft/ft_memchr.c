/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:41:39 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/09 21:46:42 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Simula la funcion memchr()
** The memchr() function scans the initial n bytes of the memory
** area pointed to by s for the first instance of c.
** Both c and the bytes of the memory area pointed to by s are
** interpreted as unsigned char.
** RETURN VALUE
** The  memchr()  and memrchr() functions return a pointer to the matching
**        byte or NULL if the character does not occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	byte_to_seek;
	size_t			i;

	ptr = (unsigned char *)s;
	byte_to_seek = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == byte_to_seek)
			return (ptr + i);
		i++;
	}
	return (0);
}
