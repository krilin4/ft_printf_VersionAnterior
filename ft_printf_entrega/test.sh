#!/bin/bash
#Comprobamos si le hemos pasado el parametro correctamente > 0
if [ $# -eq 0 ]; then
    echo "Error pasar ./test.sh arg1  --> donde arg1 es lo que enviamos a printf y ft_printf"
    exit 1
fi

# Este es nuestro programa para recompilar e ir haciendo la prueba

make fclean
make all

rm ft_printf 
rm printf
#Definimos la variable que usaremos para llamar desde el main a printf o ft_printf (-l) --> static linking
gcc -Wall -Werror -Wextra main.c -o ft_printf -D VAR_TEST -L. -l ftprintf  -g3 -fsanitize=address
gcc -Wall -Werror -Wextra main.c -o printf -L. -l ftprintf -g3 -fsanitize=address
./ft_printf | cat -ev > test_ft_printf.txt
./printf| cat -ev > test_printf.txt
if diff -y --suppress-common-lines test_ft_printf.txt test_printf.txt ;then
	echo "All tests passed"
fi


