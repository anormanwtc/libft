
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int cnt;

	cnt = 0;
	while (s[cnt])
	{
		write(fd, &s[cnt], 1);
		cnt++;
	}
}
