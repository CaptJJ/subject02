#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;
	char	a[7] = "Aprob";
    // Llamamos a ft_putstr para imprimir la cadena
	ft_putstr(a);
	return (0);
}*/
