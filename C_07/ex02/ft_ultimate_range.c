#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	dif;
	int	index;
	int	*lenAlloc;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dif = max - min;
	lenAlloc = malloc((dif * 4));
	if (lenAlloc == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = lenAlloc;
	index = 0;
	while (min < max)
	{
		lenAlloc[index] = min;
		min++;
		index++;
	}
	return (dif);
}
