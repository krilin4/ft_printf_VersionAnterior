/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:29:51 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 11:31:06 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion que se encarga de comprobar si es un caracter alfabetico o no.
** Devuelve un != 0 si es un caracter alfabetico y 0 sino
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c <= 90) && (c >= 65)) || ((c <= 122) && (c >= 97)))
		return (1);
	return (0);
}
