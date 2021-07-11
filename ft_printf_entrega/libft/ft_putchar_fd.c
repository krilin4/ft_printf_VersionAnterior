/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:55:27 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 15:56:46 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_putchar_fd
** ------------
** Prototipo
** void ft_putchar_fd(char c, int fd);
** -----------
** Parámetros
** #1. El carácter que hay que escribir
** #2. El descriptor de fichero sobre el que hay que escribir.
** -----------
** Valor de retorno
** None
** -------
** Funciones externas autorizadas
** write
** ----
** Descripción
** Escribe el carácter ’c’ sobre el descriptor de fichero proporcionado.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
