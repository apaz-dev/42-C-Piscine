/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:35:32 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/13 19:00:57 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h> */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (1)
		{
			if (to_find[j] == 0)
				return (&str[i]);
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[20];
	char needle[5];
	needle[4] = 0;
	str[19] = 0;
	while (1) 
	{
		for (int i = 0; i <19; ++i)
			str[i] = rand() % 256;
		for (int i = 0; i < 4; ++i)
			needle[i] = rand() % 256;

		int idx = rand() % 30;
		for (int i = 0; (i + idx) < 19; ++i)
			str[idx + i] = needle[i];

		for (int i = 0; i < 19; ++i)
			printf("%i ",str[i]);
		printf("\n");

		for (int i = 0; i < 4; ++i)
			printf("%i ", needle[i]);
		printf("\n");

		printf("%p -%p\n", ft_strstr(str, needle), strstr(str, needle));
		if (ft_strstr(str, needle) != strstr(str, needle))
			break;
	}
}*/
