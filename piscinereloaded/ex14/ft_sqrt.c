int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
		return(0);
	while(sqrt <= nb/2 + 1)
	{
		if (sqrt*sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return(0);
}
