int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		diff = (int)(s1[i]) - (int)(s2[i]);
		if (diff < 0)
			return (-1);
		else if (diff > 0)
			return (1);
		i++;
	}
	if (i == n && n != 0)
		i--;
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	return (0);
}
