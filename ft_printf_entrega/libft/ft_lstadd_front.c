/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:12:19 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 16:31:21 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_lstadd_front
** -----
** Prototipo
** void ft_lstadd_front(t_list **alst, t_list *new);
** -----
** Parámetros
** #1. La dirección del puntero al primer elemento de la lista.
** #2. La dirección del puntero al elemento que hay
** que añadir a la lista.
** -----
** Valor de retorno
** None
** -----
** Funciones externas autorizadas
** None
** -----
** Descripción
** Añade el elemento ’new’ al principio de la lista
** -----
** La descripción de los campos de la estructura t_list
** es la siguiente:
** • content: El dato contenido en el nodo. El void *
** permite almacenar un dato de cualquier tipo.
** • next: La dirección del siguiente nodo de la lista
** o NULL, si se trata del último nodo.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = alst[0];
		*alst = new;
	}
}
