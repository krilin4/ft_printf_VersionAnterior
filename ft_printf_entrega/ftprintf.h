/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernandojosesanchezgarcia <fernandojose    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 14:05:06 by fesanche          #+#    #+#             */
/*   Updated: 2021/06/25 19:20:58 by fernandojos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H
/*
** Definimos constantes
*/

# define CONV "cspdiuxX%"
# define FLAGS "-0.*"
# define FLAGS_R "-0."
# define CONV_P "diouixX"
# define BASE_HEX "0123456789abcdef"
# define BASE_HEX_U "0123456789ABCDEF"

/*
** Librerias incluidas
*/
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

/*
 * Estructura que va almacenar la informacion del parametro a mostar 
 */

typedef struct s_printf
{
	char		flags;
	int			width;
	int			precision;
	int			lengh;
	char		conversion;
	int			punto_extra;
	int			def_width;
	int			def_prec;
}				t_printf;

/* XXXXX--> tiene flags --> XOR 1 00001
**			tiene width --> XOR 2 00010
** 			tiene precision --> XOR 4 00100
**			tiene lengh --> XOR 8 01000
**			tiene conversion --> XOR 16 10000 
** Funciones que vamos a utilizar
*/
typedef struct s_intd
{
	int	digits;
	int	zeros_p;
	int	zeros_w;
	int	res;
	int	num_neg;
}				t_intd;

int		ft_printf( char *ptr_string, ...);
int		ft_put_c( t_printf *args, va_list ap);
int		ft_put_s( t_printf *args, va_list ap);
int		ft_put_p( t_printf *args, va_list ap);
int		ft_put_d( t_printf *args, va_list ap);
int		ft_put_u( t_printf *args, va_list ap);
int		ft_put_x( t_printf *args, va_list ap);
int		ft_put_xx( t_printf *args, va_list ap);

int		ft_putnbr_base_width(long nbr, char *base, int digitos);
int		ft_get_digits_base(long nbr, char	*base);
int		ft_putnbr_base(int nbr, char *base);
void	init_structure(t_intd	*struct_int_ptr, int value);
void	get_zerosp(t_intd	*s_int, t_printf	*args);
void	get_zerosw(t_intd	*s_int, t_printf	*args);
int		print_p(t_intd	*s_int);
int		print_w(t_intd	*s_int, t_printf	*args);
int		ft_putnbr_base_u(unsigned int nbr, char *base);
int		get_base_verificacion(char *base);
int		sacar_modulo(long nbr, int base_entera);
int		imprimir_numero(long nbr, long modulo, int base_entera, char *base);
void	init_structure_u(t_intd	*struct_int_ptr);
int		ft_get_digits_base_x(unsigned long nbr, char *base);

//int	ft_get_digits_base_u(unsigned long nbr, char *base);
//int	ft_get_digits_base(long nbr, char	*base);
//int	ft_putnbr_base_u(unsigned int nbr, char	*base);
//int	ft_putnbr_base_width( long nbr, char *base, int width);
//
//int	get_base_verificacion(char *base);
//int	sacar_modulo(long nbr, int base_entera);
//int	imprimir_numero(long nbr, long modulo, int base_entera, char *base);
int		ft_putstr(char *s);
int		ft_putchar(char c);
void	inicializar_struct(t_printf	*argumentos);
int		parse_get_digits(long width);
char	*read_variables(t_printf	*args, char	*cadena);
char	*leer_variables(t_printf	*args, char	*cadena, va_list ap);
void	check_variables(t_printf	*args, char	*cadena, char	*cadena_end);

char	*check_asteriscos(t_printf *args, char *cadena, va_list ap);

#endif