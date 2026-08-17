#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	write(1, &(char){nb + '0'}, 1);
}

/*
//#include <limits.h>
//#include <stdio.h>

int	main(void)
{
	int	n = INT_MAX;

	ft_putnbr(n);
	printf("\n%d\n", n);
}
*/
