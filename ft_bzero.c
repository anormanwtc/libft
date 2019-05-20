
#include <string.h>

void	bzero(void *s, size_t n)
{
	size_t cnt;

	cnt = 0;
	while (cnt < n)
	{
		s[cnt] = 0;
		cnt++;
	}
}
