/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:50:19 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:47:19 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parámetros
** #1. La cadena de caracteres que hay que depurar.
** #2. El set de referencia de caracteres que hay que retirar.
** -----------------------
** Valor de retorno
** La cadena de caracteres depurada.
** NULL si falla la reserva de memoria.
** Funciones externas autorizadas
** malloc()
** Descripción
** Reserva memoria (con malloc(3))
** y devuelve la cadena de caracteres que es una copia de ’s1’,
** sin los caracteres indicados en el ’set’ al principio y
** al final de la cadena de caracteres.
** Elimina los caracteres que se encuentra al principio de s1
** que se encuentren en el set. con la funcion strchr() para comprobar
** si se encuentra en la ristra de set.
** Hacemos lo mismo con los caracteres del final, y
** Por ultimo, llamamos a la funcion substr() para crear
** una cadena a partir de la inicial que empiece en la nueva posicion
** y vaya hasta i + 1 ( para poner el '\0').
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		s1++;
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	ptr = ft_substr((char *)s1, 0, i + 1);
	return (ptr);
}
