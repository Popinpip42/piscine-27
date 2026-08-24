/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:33:11 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/24 18:33:14 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
