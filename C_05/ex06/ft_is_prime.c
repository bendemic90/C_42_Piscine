int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if ((nb / 2) > 46341)
		i = 46341;
	else
		i = nb / 2;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}
