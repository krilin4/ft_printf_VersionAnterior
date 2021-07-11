/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:35:28 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 13:20:45 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion que determina si el caracter corresponde la tabla ascii(0-127) o no:
** Return value:
**     -)!=0 si es un caracter ascii
**     -)0 si no lo es
*/

int	ft_isascii(int c)
{
	if (((c <= 127) && (c >= 0)))
		return (1);
	return (0);
}
