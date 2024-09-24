/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:49:27 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/09/20 18:46:27 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(char *str, int c, int l)
{
	int	i;
	char *str1;
	
	i = 0;
	while (i < l)
	{
		if (str[i] != c)
			i++;
		else
		{
			str1 = &str[i];
			return (str1);
		}
	}
	return (0);
}
