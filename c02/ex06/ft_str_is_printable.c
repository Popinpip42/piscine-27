
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str <= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	res;
	res = ft_str_is_alpha(av[ac-1]);
	printf("%d\n", res);
}
*/
