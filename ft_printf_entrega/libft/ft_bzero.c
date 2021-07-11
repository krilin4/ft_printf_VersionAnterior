/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 01:47:17 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/02 21:59:09 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The  bzero()  function  erases  the  data  in the n bytes of the memory
** starting at the location pointed to by s, by writing zeroes (bytes con‐
** taining '\0') to that area.
** void bzero(void *s, size_t n);
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	while (n > 0)
	{
		ptr = (char *)s;
		ptr[n - 1] = '\0';
		n--;
	}
}
