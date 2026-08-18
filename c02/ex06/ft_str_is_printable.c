
int	ft_str_is_printable(char *str)
{
	int	res;

	res = 0;
	while (*str && (*str >= 33 && *str <= 125))
		str++;
	if (*str == '\0')
		res = 1;
	return (res);
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
