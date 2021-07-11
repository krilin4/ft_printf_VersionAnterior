/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:58:58 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 15:59:40 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_putendl_fd
** ------
** Prototipo
** void ft_putendl_fd(char *s, int fd);
** ------
** Parámetros
** #1. La cadena de caracteres que hay que escribir
** #2. El descriptor de fichero sobre el que hay que escribir.
** ------
** Valor de retorno
** None
** ------
** Funciones externas autorizadas
** write
** ------
** Descripción
** Escribe la cadena de caracteres ’s’ sobre el descriptor
** de fichero proporcionado, seguida de un salto de línea.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != 0)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
