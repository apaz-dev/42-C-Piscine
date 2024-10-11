/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:28:36 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/12 12:39:01 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i2 = 0;
	while (src[i2] != '\0' && i2 < size)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "hola";
	char	dest[] = "adios";
	int     size = 2;

	printf("%s\n", strlcat(dest, src, size));
	char	src1[] = "hola";
        char	dest1[] = "adios";

	printf("%s", ft_strlcat(dest1, src1, size));
}*/
