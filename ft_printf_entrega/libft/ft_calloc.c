/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:43:01 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/31 14:56:10 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			tamanio;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	tamanio = nmemb * size;
	while (tamanio--)
		ptr[tamanio] = 0;
	return ((void *)ptr);
}
