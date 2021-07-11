/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:44:50 by fesanche          #+#    #+#             */
/*   Updated: 2021/05/03 20:44:52 by krilin4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parámetros:
**  #1. La cadena de caracteres prefijo.
**  #2. La cadena de caracteres sufijo.
** Valor de retorno
** La nueva cadena de caracteres.
** NULL si falla la reserva de memoria.
** Funciones externas autorizadas:
** malloc
** Descripción:
** Reserva memoria (con malloc(3)) y devuelve la nueva cadena de caracteres
** que resulta de la concatenación de ’s1’ y ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char	*ptr;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len_s2)
	{
		ptr[len_s1 + i] = s2[i];
		i++;
	}
	return (ptr);
}
