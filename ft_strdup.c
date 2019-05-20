#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;

	len = strlen(s1);
	dup = (char*)malloc((len + 1) * sizeof(char));
	len = 0;
	while (s1[len] != '\0')
	{
		dup[len] = s1[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
