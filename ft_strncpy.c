
#include <string.h>

char*	strncpy(char* dst, const char* src, size_t len)
{
	size_t	cnt;

	count = 0;

	while(src[cnt] != '\0' && cnt < len)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	while(cnt < len)
	{
		dst[cnt] = '\0';
		cnt++;
	}
	return(dst);
}
