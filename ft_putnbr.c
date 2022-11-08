#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > -1 && nbr < 10)
		ft_putchar (nbr + '0');
	else if (nbr < 0)
	{
		ft_putchar ('-');
		ft_putchar (nbr*(-1));
	}
	else
	{
		ft_putnbr (nbr/10);
		ft_putnbr (nbr%10);
	}
}
