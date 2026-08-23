/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusirpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 20:24:27 by lusirpa           #+#    #+#             */
/*   Updated: 2026/08/18 20:31:35 by lusirpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str1 = "Hola";
	char dest[5];
	printf("dest og: %s\n", dest);
	ft_strcpy(dest, str1);
	printf("src: %s\n", str1);
	printf("dest: %s\n", dest);
}
*/
