#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	dif;
	int	index;
	int	*range;

	if (min >= max)
		return (0);
	dif = (max - min);
	range = malloc(dif * 4);
	if (range == NULL)
		return (0);
	index = 0;
	while (min < max)
	{
		range[index] = min;
		min++;
		index++;
	}
	return (range);
}
