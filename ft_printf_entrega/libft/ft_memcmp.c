/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:47:55 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/02 22:13:43 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion con la que intentamos emular el comportamiento del memcmp()
** The  memcmp()  function compares the first n bytes (each interpreted as
**        unsigned char) of the memory areas s1 and s2.
**
** Return Value:
** The memcmp() function returns  an  integer  less  than,  equal  to,  or
** greater than zero if the first n bytes of s1 is found, respectively, to
** be less than, to match, or be greater than the first n bytes of s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s2[i] != ptr_s1[i])
			return ((int)((int)(ptr_s1[i]) - (int)(ptr_s2[i])));
		i++;
	}
	return (0);
}
