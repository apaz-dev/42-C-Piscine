/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:02:48 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/09/20 18:58:42 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	dc;

	i = 0;
	dc = 0;
	while (dest[i] != '\0')
	{
		dc++;
		i++;
	}
	i2 = 0;
	while (src[i2] != '\0' && i2 < size)
	{
		dest[i] = src[i2];
		i++;
		i2++;
		dc++;
	}
	dest[i] = '\0';
	return (dc);
}
