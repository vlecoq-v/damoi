int	ft_count_if(char **tab, int(*f)(char*))
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			r++;
		i++;
	}
	return (r);
}
