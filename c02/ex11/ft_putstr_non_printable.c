
#include <unistd.h>

void	build_hex_arr(char *arr)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			arr[i] = '0' + i;
		else
			arr[i] = 'a' + (i - 10);
		i++;
	}
}

void ft_putstr_non_printable(char *str)
{
	char	hex_arr[16];

	build_hex_arr(hex_arr);
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			write(1, "\\", 1);
			write(1, &hex_arr[*str >> 0x4 & 0x0F], 1);
			write(1, &hex_arr[*str & 0x0F], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	//ft_putstr_non_printable(av[ac-1]);
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
*/
