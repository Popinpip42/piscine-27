/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:35:14 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/24 20:11:03 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_hex_arr(char *hex_arr)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			hex_arr[i] = '0' + i;
		else
			hex_arr[i] = 'a' + (i - 10);
		i++;
	}
}

void	ft_print_char_hex(char *c)
{
	char	hex_arr[16];

	fill_hex_arr(hex_arr);
	write(1, &hex_arr[*c >> 4 & 0x0F], 1);
	write(1, &hex_arr[*c & 0x0F], 1);
}

void	ft_print_hex_str(char *str)
{
	while (*str)
	{
		ft_print_char_hex(str);
		str++;
		ft_print_char_hex(str);
		str++;
		write(1, " ", 1);
	}
}

void	ft_print_str(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_char_pointer(void)
{
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	//ft_print_char_pointer((char*)addr);
	write(1, ": ", 2);
	ft_print_hex_str((char *)addr);
	ft_print_str((char *)addr, size);
	return (addr);
}

#include <stdio.h>
int	main(void)
{
	void *vooo = ft_print_memory("Bonjour les amin", 16);
	write(1, "\n", 1);

	printf("%p\n", vooo);
}
