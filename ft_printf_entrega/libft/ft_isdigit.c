/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:31:12 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 12:33:09 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Suponemos que hay que determinar si en la funcion
** si es un dígito o no lo que le estamos pasando:
** Devolvemos != 0 si es un digito
** Devolvemos 0 sino..
*/

int	ft_isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
		return (1);
	return (0);
}
