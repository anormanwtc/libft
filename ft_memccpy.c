
#include <string.h>

void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < n && src[cnt] != (unsigned char)c)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	if (src[cnt] == (unsigned char)c)
	{
		dst[cnt] = src[cnt];
		cnt++;
		return (&dst[cnt]);
	}
	else
		return (NULL);
}
