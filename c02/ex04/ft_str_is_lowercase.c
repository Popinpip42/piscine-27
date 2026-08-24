/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:33:20 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/24 18:33:23 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
