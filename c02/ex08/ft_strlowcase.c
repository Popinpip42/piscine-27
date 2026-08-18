
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	ft_strlowcase(av[ac-1]);
	printf("%s\n", av[ac-1]);
}
*/
