
#include "libft.h"

void	ft_putchar_nd(char c, int fd)
{
	write(fd, &c, 1);
}
