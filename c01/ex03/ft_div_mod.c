/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:38:48 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/18 18:42:56 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	res;
	int	modi;

	res = a / b;
	modi = a % b;
	*div = res;
	*mod = modi;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = 5;
	int	b = 2;
	int	div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d, mod: %d\n", div, mod);
} 
*/
