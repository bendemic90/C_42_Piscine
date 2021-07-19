#include <stdlib.h>

char	*ft_strdup(char *src);

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		index;

	index = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
