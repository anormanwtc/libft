
#include "libft.h"

void	ft_putendl(char const *s)
{
	int cnt;

	cnt = 0;
	while (s[cnt])
	{
		write(1, &s[cnt], 1);
		cnt++;
	}
	write(1, "\n", 1);
}
