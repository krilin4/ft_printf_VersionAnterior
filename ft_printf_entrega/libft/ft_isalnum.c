/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:33:33 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/02 22:00:05 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funcion que determina si el caracter es o nó alfa numerico
** return value :
**     != 0 si es alfanumerico
**     0 si no es alfanumerico
*/

int	ft_isalnum(int c)
{
	if (((c <= 90) && (c >= 65)) || ((c <= 122) && (c >= 97))
		|| ((c <= 57) && (c >= 48)))
		return (1);
	return (0);
}
