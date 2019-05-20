
char* ft_strstr(const char* haystack, const char* needle)
{
	int cntHay;
	int cntNee;
	char* found;

	cntHay = 0;
	while(haystack[cntHay] != '\0')
	{
		cntNee = 0;
		found = &haystack[cntHay];
		while(haystack[cntHay] == needle[cntNee])
		{
			cntHay++;
			cntNee++;
		}
		if(needle[cntNee] == '\0')
			return(found);


