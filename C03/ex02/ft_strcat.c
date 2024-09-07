/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:16:40 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/11 11:58:24 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i2 = 0;
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "hola";
	char	dest[] = "adios";

	printf("%s\n", strcat(dest, src));
	char	src1[] = "hola";
        char	dest1[] = "adios";

	printf("%s", ft_strcat(dest1, src1));
}*/
