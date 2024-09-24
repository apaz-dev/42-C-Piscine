/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:08:28 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/09/20 18:47:46 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	lf;

	i = 0;
	lf = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
		{
			lf = i;
			i++;
			continue ;
		}
		else
			i++;
	}
	return (&str[lf]);
}
