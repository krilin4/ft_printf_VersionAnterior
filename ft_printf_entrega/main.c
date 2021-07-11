

#include "ftprintf.h"


#ifdef VAR_TEST
# define F ft_printf
#else
# define F printf
#endif


int main (void)
{
    int res;
    //char *  argumento;
    
    


    res = 0;

    //argumento = argv[1];
    res = F("hoge\n");
	res =F("[%d]\n", -2147483647);
	//res =F("[%10.5s]\n", "hoge");
	//res =F("[%10.2s]\n", "hoge");
    return (res);

}