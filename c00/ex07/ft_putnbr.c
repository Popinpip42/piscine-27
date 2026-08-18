/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 17:55:11 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/18 17:55:11 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	write(1, &(char){nb + '0'}, 1);
}

/*
//#include <limits.h>
//#include <stdio.h>

int	main(void)
{
	int	n = INT_MAX;

	ft_putnbr(n);
	printf("\n%d\n", n);
}
*/
