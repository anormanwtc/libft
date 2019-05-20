
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t cnt;

	cnt = 0;
	while (cnt < n)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	return (dst);
}
