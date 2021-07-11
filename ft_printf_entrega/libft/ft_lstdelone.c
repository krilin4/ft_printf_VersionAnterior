/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:48:52 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 16:50:31 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_lstdelone
** ----
** Prototipo
** void ft_lstdelone(t_list *lst, void (*del)(void *));
** ----
** Parámetros
** #1. El elemento cuya memoria se debe liberar
** #2. La dirección de una función utilizada
** para borrar el contenido del elemento.
** ----
** Valor de retorno
** None
** ----
** Funciones externas autorizadas
** free
** ----
** Descripción
** Libera la memoria del elemento pasado como argumento
** utilizando la función ’del’ y después free(3).
** No se debe liberar la memoria de ’next’.
** Vamos que llama a la funcion del y le pasamos
** lst->content y luego libremos memoria de el puntero lst;
** ----
** La descripción de los campos de la estructura
** t_list es la siguiente:
** • content: El dato contenido en el nodo. El void *
** permite almacenar un dato de cualquier tipo.
** • next: La dirección del siguiente nodo de la lista
** o NULL, si se trata del último nodo.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && (*del))
	{
		(*del)(lst->content);
		free(lst);
	}
}
