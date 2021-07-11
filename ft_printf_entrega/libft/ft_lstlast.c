/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:46:31 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 16:47:25 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_lstlast
** ----
** Prototipo
** t_list *ft_lstlast(t_list *lst);
** ----
** Parámetros
** #1. Principio de la lista.
** ----
** Valor de retorno
** Último elemento de la lista
** ----
** Funciones externas autorizadas
** None
** ----
** Descripción
** Devuelve el último elemento de la lista.
** ----
** La descripción de los campos de la estructura t_list es la siguiente:
** • content: El dato contenido en el nodo. El void *
** permite almacenar un dato de cualquier tipo.
** • next: La dirección del siguiente nodo de la lista
** o NULL, si se trata del último nodo.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
