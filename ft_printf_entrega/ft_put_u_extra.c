#include <stdio.h>
#include <unistd.h>
#include "ftprintf.h"

int	ft_putnbr_base_u(unsigned int nbr, char *base)
{
	int		base_entera;
	long	modulo;
	long	numero;
	int		res;

	res = 0;
	numero = nbr;
	base_entera = get_base_verificacion(base);
	if (base_entera != (-1))
	{
		modulo = sacar_modulo(numero, base_entera);
		res = imprimir_numero(numero, modulo, base_entera, base);
	}
	return (res);
}

void	init_structure_u(t_intd	*struct_int_ptr)
{
	struct_int_ptr->digits = 0;
	struct_int_ptr->zeros_p = 0;
	struct_int_ptr->zeros_w = 0;
	struct_int_ptr->res = 0;
	struct_int_ptr->num_neg = 0;
}
