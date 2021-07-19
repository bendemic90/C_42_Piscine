#include <unistd.h>

void	ft_print_comb(void);

void	ft_handle_grammar(char a);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				ft_handle_grammar(a);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_handle_grammar(char a)
{
	int	comma;
	int	space;

	comma = 44;
	space = 32;
	if (a != '7')
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}
