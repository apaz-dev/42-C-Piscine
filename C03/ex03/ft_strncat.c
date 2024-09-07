/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:01:37 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/11 12:16:14 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i2 = 0;
	while (i2 < nb && src[i2] != '\0')
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
	char dest[] = "Adios";
	char src[] = "Hola";
	char dest1[] = "Adios";
        char src1[] = "Hola";

	printf("%s\n", ft_strncat(dest, src, 2));
	printf("%s", strncat(dest1, src1, 2));
}*/
