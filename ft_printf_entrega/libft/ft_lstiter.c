/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:55:44 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 16:56:50 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_lstiter
** ----
** Prototipo
** void ft_lstiter(t_list *lst, void (*f)(void *));
** ----
** Ficheros a entregar
** ----
** Parámetros
** #1 La dirección del puntero a un elemento.
** #2. La dirección de la función que hay que aplicar.
** ----
** Valor de retorno
** None
** ----
** Funciones externas autorizadas
** None
** ----
** Descripción
** Realiza una iteración sobre la lista ’lst’ y
** aplica la función ’f’ al contenido de cada elemento
** ----
** La descripción de los campos de la estructura t_list
** es la siguiente:
** • content: El dato contenido en el nodo.
** El void * permite almacenar un dato de cualquier tipo.
** • next: La dirección del siguiente nodo de la lista
**  o NULL, si se trata del último nodo.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
