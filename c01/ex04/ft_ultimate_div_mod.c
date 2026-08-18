/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:35:26 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/18 18:38:30 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res;
	int	mod;

	res = *a / *b;
	mod = *a % *b;
	*a = res;
	*b = mod;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = 5;
	int	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a:%d, b:%d\n", a, b);
}
*/
