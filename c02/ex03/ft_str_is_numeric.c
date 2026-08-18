/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 20:54:07 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/18 20:54:36 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 0;
	while (*str && (*str >= '0' && *str <= '9'))
		str++;
	if (*str == '\0')
		res = 1;
	return (res);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%d\n", ft_str_is_numeric(av[ac-1]));
}
*/
