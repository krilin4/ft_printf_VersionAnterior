/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesanche <indurain_2@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:04:08 by fesanche          #+#    #+#             */
/*   Updated: 2020/07/10 16:05:22 by fesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Nombre de la función
** ft_putnbr_fd
** -----
** Prototipo
** void ft_putnbr_fd(int n, int fd);
** -----
** Parámetros
** #1. El entero que hay que escribir
** #2. El file descriptor sobre el que hay que escribir.
** -----
** Valor de retorno
** None
** -----
** Funciones externas autorizadas
** write
** -----
** Descripción
** Escribe el entero ’n’ sobre el descriptor de
** fichero proporcionado.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*texto;

	texto = ft_itoa(n);
	while (*texto != 0)
	{
		write(fd, texto, 1);
		texto++;
	}
}
