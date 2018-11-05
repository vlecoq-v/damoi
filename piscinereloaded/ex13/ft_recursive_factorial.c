int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	printf("MAMEN ON EST A %d\n", nb);
	if(nb - 1 <=  0)
		return(1);
	return(nb*ft_recursive_factorial(nb - 1));	
}
