/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:35:47 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:46:36 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres
** que proviene de la cadena pasada como argumento.
** Esta nueva cadena comienza en el índice ’start’ y tiene
** como tamaño máximo ’len’.
** Parametros:
** #1. La cadena de la que se extrae la nueva cadena
** #2. El índice del principio de la nueva cadena
** #3. El tamaño máximo de la nueva cadena.
** Return Value:
**     -)La nueva cadena de caracteres.
**     -)NULL si falla la reserva de memoria, o el puntero s no existe.
** Funcionamiento:
** Si s no existe devolvemos null, si el tamaño completo de s es menor que el
** parametro de comienzo, se debe de reservar tamanio para una cadena vacia,lo
** hacemos a traves de al funcion ya programada ft_strdup(),
** que nos permite la reservar de memoria en el heap
** y copia de la cadenap asada como parametro en este.
** Por ultimo si el tamañio de s[start] hasta el '\0' es < que len,
** machacamos el valor de este para asi no tener que añadir esta condicion
** en el bucle if.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	long_start;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	long_start = ft_strlen(s + start);
	if (long_start < len)
		len = long_start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
