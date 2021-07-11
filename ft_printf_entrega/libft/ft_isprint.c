/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:22:48 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 13:37:26 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion que determina si el caracter es o no printeable
** return value:
**     -)!= 0 si es printeable
**     -)0 si no es printeable
*/

int	ft_isprint(int c)
{
	if (((c <= 126) && (c >= 32)))
		return (1);
	return (0);
}
