# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krilin4 <krilin4@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 15:37:38 by fesanche          #+#    #+#              #
#    Updated: 2021/07/11 11:01:34 by krilin4          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


###################
#					#
#     VARIABLES		#
###################

# MAKEFILE DE UNA LIBRERIA listamos las funciones que va a tener nuestra libreria
SRCS    =    ft_printf.c ft_func_extra.c ft_put_c.c ft_put_s.c ft_put_p.c ft_put_p_extra.c ft_put_d.c ft_put_d_extra.c ft_put_d_extra2.c ft_put_u.c ft_put_u_extra.c ft_put_x.c ft_put_xx.c ft_flag_aste.c

#ft_put_xx.c ft_put_x.c ft_putnbr_base_u.c ft_put_u.c ft_putnbr_base.c ft_put_d.c ft_putnbr_base_width.c ft_put_p.c ft_put_s.c ft_put_c.c

#Funciones extra que vamos a utilizar en nuestra parte extra
SRCS_EXTRA	= 

# Objetos que vamos a generar
OBJS    = ${SRCS:.c=.o}


# Objetos extra que vamos a generar
OBJS_EXTRA   = ${SRCS_EXTRA:.c=.o}

# Nombre del ejecutable
NAME    = libftprintf.a

# Compilador a utilizar cambiar a cc
CC      = cc

#Comando para generar la libreria linkando los .o
AR      = ar rc

#Comando para añadir la libreria bonus a la principal --> U
AR_v2      = ar rcuv

#Creamos indice de funciones que contiene las funciones de nuestra libreria por si luego queremos usarla para compilar.
RANLIB = ranlib 

# Borramos
RM      = rm -f

# Flag de compilacion (quitar -g3 -fsanitize=address)
CFLAGS  = -Wall -Wextra -Werror
# Instrucciond e generar los archivos objeto donde estamos compilando todos los archivos .c y pasandolos a archivos .o y posteriormente con el ${<:.c=.o} hacemos que cambien el nombre a .o
.c.o:   ${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

# Linkado de los archivos objeto
#lO QUE SE PONE A LA DERECHA DE LA REGLA( name) SON LOS ARCHIVOS OBJS, SI NO ESTAN SE LLAMA automatica .c.o 
$(NAME): ${OBJS}
	${AR} ${NAME} ${OBJS} 
	${RANLIB} ${NAME}


# Compilacion de la regla ALL, ponemos como requremiento los ${OBJS} 
#asi estamos seguros que si no existen nos lo generará con la regla .c.o
#Luego llamammos al makefile de la carpeta libft con la regla bonus (para tenerlos todos). sera el makefile del propio LIBFT el que se encarga de no hacer relink en el caso de que NO necesite.
#copiamos el libft.a nuestra carpeta para que sea mas facil compilarlo.
#por ultimo Añadimos a la libreria los siguientes objetos.
all:        ${OBJS}
			$(MAKE) -C libft all
			$(MAKE) -C libft bonus
			cp libft/libft.a ${NAME} 
			${AR_v2} ${NAME} ${OBJS} 



# LIMPIEZA DE LOS ARCHIVOS .O 
# LLamamos  a la libreria libft con el parametro clean para que elimine los objetos .o
clean:
	$(MAKE) -C libft clean
	${RM} ${OBJS} ${OBJS_EXTRA}

# LIMPIEZA DE LOS ARCHIVOS .O + ME BORRA EL EJECUTABLE
fclean:	clean
		$(MAKE) -C libft fclean
		${RM} ${NAME}

#Fuerza la recompilacion borrando todo y recompilandolo.
re:		fclean all

#Seccion bonus que compile las funciones extra tambien donde si no hemos compilado el con el u --> añadiendo los nuevos o los que no esta.
#v---> Momdo verbose.
bonus: ${OBJS_EXTRA}		
	${AR_v2} $(NAME) ${OBJS_EXTRA} 
	${RANLIB} ${NAME}


#Indicamos "reglas" que no deben de ser interpretadas como ficheros
.PHONY: all clean fclean re bonus subdirs $(SUBDIRS)


#Para el uso de la librería tenemos que utilizar el siguiente comando:
#gcc -Wall -Werror -Wextra main.c -o ft_printf -D VAR_TEST -L. -l ftprintf  -g3 -fsanitize=address
#Donde con -L le indicamos donde esta nuetra libreria --> "." directorio actual
#Con -l le indicamos el nombre de nuestra libreria ftprintf.


#Hemos añadido el Main.c junto con un archivo test.sh que lo que hacemos e ir compilando nuetro fichero para usar la libreria FT_PRINTF y printf y comprobar la diferencia.
