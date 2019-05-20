
char	*strcpy(char *dst, const char *src)
{
	int		cnt;

	count = 0;
	while (src[cnt] != '\0')
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	dst[cnt] = src[cnt];
	return (dst);
}
