/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:44:35 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 16:45:43 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_lstsize
** ----
** Prototipo
** int ft_lstsize(t_list *lst);
** ----
** Ficheros a entregar
** ----
** Parámetros
** #1. Principio de la lista.
** ----
** Valor de retorno
** Tamaño de la lista.
** ----
** Funciones externas autorizadas
** None
** ----
** Descripción
** Cuenta el número de elementos de la lista.
** ----
** La descripción de los campos de la
** estructura t_list es la siguiente:
** • content: El dato contenido en el nodo.
** El void * permite almacenar un dato de cualquier tipo.
** • next: La dirección del siguiente nodo de la lista
**  o NULL, si se trata del último nodo.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
