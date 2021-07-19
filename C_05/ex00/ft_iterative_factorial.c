int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	sumfac;

	sumfac = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		sumfac = sumfac * nb;
		nb--;
	}
	return (sumfac);
}
