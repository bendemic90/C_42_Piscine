char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	idx;
	int	k;

	idx = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[idx] != '\0')
	{
		k = 0;
		while (str[idx + k] == to_find[k] && str[idx + k] != '\0')
		{
			if (to_find[k + 1] == '\0')
				return (&str[idx]);
			k++;
		}
		idx++;
	}
	return (0);
}
