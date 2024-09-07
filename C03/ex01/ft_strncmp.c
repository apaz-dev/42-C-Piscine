/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:40:09 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/11 11:37:41 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "ABC";
	char s2[] = "ABC";

	printf("%d\n", strncmp(s1,s2, 3));
	printf("%d\n", ft_strncmp(s1,s2, 3));
	printf("\n%d\n", ft_strncmp("ABC","ABD", 3));
	printf("%d\n", strncmp("ABC","ABD", 3));
	printf("\n%d\n", ft_strncmp("ABC","ABB", 3));
	printf("%d\n", strncmp("ABC","ABB", 3));
}*/
