#include <unistd.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	index;

	index = argc - 1;
	while (index > 0)
	{
		ft_putstr(argv[index]);
		index--;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
	write(1, "\n", 1);
}
