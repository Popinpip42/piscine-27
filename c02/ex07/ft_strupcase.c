
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	ft_strupcase(av[ac-1]);
	printf("%s\n", av[ac-1]);
}
*/
