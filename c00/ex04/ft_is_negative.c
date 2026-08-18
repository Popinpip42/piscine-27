/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 17:54:47 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/18 17:54:48 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

/*
int	main(int ac, char +*av)
{
	int	n = -1;
	int	p = 2;

	ft_is_negative(n);
	ft_is_negative(p);
}
*/
