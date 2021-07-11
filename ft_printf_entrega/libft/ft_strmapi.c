/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:46:00 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 15:48:50 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_strmapi
** ---------
** Prototipo
** char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
** ---------
** Parámetros
** #1. La cadena de caracteres sobre la que hay iterar
** #2. La función que hay que aplicar a cada carácter.
** -------
** Valor de retorno
** La cadena de caracteres que resulte de las aplicaciones
** sucesivas de ’f’.
** Devuelve NULL si falla la asignación.
** --------
** Funciones externas autorizadas
** malloc
** -------
** Descripción
** Aplica la función ’f’ a cada carácter de la de cadena de
** caracteres ’s’ para crear una nueva cadena de caracteres
** (con malloc (3)) que resulte de las aplicaciones sucesivas de ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*salida;

	if (!s || !f)
		return (NULL);
	salida = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (salida == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		salida[i] = f(i, s[i]);
		i++;
	}
	salida[i] = '\0';
	return (salida);
}
