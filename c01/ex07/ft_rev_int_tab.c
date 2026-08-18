/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:53:34 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/18 19:49:12 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	to_place;

	i = 0;
	while (i < size)
	{
		to_place = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = to_place;
		size--;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	//int	tab[6] = {0, 1, 2 , 3, 4, 5};
	int	tab[6] = {5, 1, 2 , 3, 4, 10};
	ft_rev_int_tab(tab, 6);
	for (int i = 0; i < 6; i++)
		printf("%d\n", tab[i]);
}
*/
