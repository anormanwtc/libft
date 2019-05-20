
int		ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (8);
	if (c > 96 && c < 133)
		return (8);
	if (c > 140 && c < 173)
		return (8);
	return (0);
}

/*
** returns nonzero if the value matches a decimal or octal
** alphabet character.
*/
