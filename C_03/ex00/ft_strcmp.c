int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = (int)(s1[i]) - (int)(s2[i]);
		if (diff < 0)
		{
			return (-1);
		}
		else if (diff > 0)
		{
			return (1);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	return (0);
}
