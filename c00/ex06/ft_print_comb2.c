#include <unistd.h>

void	add_padding(int n)
{
	if (n < 10)
		write(1, "0", 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	write(1, &(char){nb + '0'}, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			add_padding(i);
			ft_putnbr(i);
			write(1, " ", 1);
			add_padding(j);
			ft_putnbr(j);
			if (i != 98)
				write(1, ", ", 3);
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
