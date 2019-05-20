
#include "libft.h"

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if ((nbr / 10) > 0)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + 48)
}
