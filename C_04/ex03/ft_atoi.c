int	ft_check(int a);

int	ft_atoi(char *str);

int	ft_check(int a)
{
	if (a == 0)
		return (1);
	if (a == 1)
		return (0);
	if (a % 2 == 0)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	res;
	int				idx;
	int				posneg;

	res = 0;
	idx = 0;
	posneg = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] == '-')
			posneg++;
		if (str[idx] >= '0' && str[idx] <= '9')
			res = res * 10 + (str[idx] - '0');
		if (str[idx] >= 'a' && str[idx] <= 'z')
			break ;
		if (str[idx] >= 'A' && str[idx] <= 'Z')
			break ;
		idx++;
	}
	if (!ft_check(posneg))
		return (-res);
	else
		return (res);
}
