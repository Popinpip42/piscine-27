#include <unistd.h>

//TODO: Casi cruck
void	write_num(int len, int i)
{
	//NOTE: This kinda works... better...not really 
		// write_num(len - 1, i - 1);
		// i = 9;
	if (len > 1)
		write_num(len - 1, i + 1);
	write(1, &(char){i + '0'}, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 8)
	{

		i++;
	}
}

int	main(void)
{
	ft_print_combn(2);
}
