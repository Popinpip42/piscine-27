/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 19:49:35 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/18 20:09:01 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	tav[5] = {4, 3, 8, 1, 2};
	ft_sort_int_tab(tav, 5);
	for (int i = 0; i < 5; i++)
		printf("%d\n", tav[i]);
}
*/
