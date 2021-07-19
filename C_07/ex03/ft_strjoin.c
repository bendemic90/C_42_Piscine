char	*ft_strjoin(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		k;
	int		n;
	char	*output;

	k = 0;
	n = 0;
	output = (char *)malloc(sizeof(strs) + (sizeof(sep) * size - 1) + 1);
	if (output == NULL)
		return (0);
	while (n < size)
	{
		index = 0;
		while (strs[n][index] != '\0')
			output[k++] = strs[n][index++];
		index = 0;
		while (sep[index] != '\0' && n != size - 1)
			output[k++] = sep[index++];
		n++;
	}
	output[k] = '\0';
	return (output);
}
