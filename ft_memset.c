
#include <strings.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cnt;
	unsigned char	ch;

	cnt = 0;
	ch = (unsigned char)c;
	while (cnt < len)
	{
		b[cnt] = ch;
		cnt++;
	}
	return (b);
}
