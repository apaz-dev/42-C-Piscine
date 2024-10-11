/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:10:13 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/25 13:36:23 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"


int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "ABC";
	char s2[] = "ABC";

	printf("%d\n", strcmp(s1,s2));
	printf("%d\n", ft_strcmp(s1,s2));
	printf("%d\n", ft_strcmp("ABC","ABD"));
	printf("%d\n", strcmp("ABC","ABD"));
	printf("%d\n", ft_strcmp("ABC","ABB"));
	printf("%d\n", strcmp("ABC","ABB"));
}*/
