/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 18:41:35 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:45:56 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Busca la primera ocurrencia de la cadena "find" en "s",
** donde la búsqueda esta limitada  a los primero slen caracteres
** de "s".
** Return Value si find = "" --> (s)
*/

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	if (find[i] == 0)
		return (ptr);
	while (ptr[i] != '\0' && i < slen)
	{
		if (ptr[i] == find[0])
		{
			j = 1;
			while (find[j] == ptr[i + j] && find[j] != '\0' && ((i + j) < slen))
			{
				j++;
			}
			if (find[j] == '\0')
				return (ptr + i);
		}
		i++;
	}
	return (0);
}
