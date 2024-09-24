/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:12:17 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/09/20 18:47:35 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(char *str, char *to_find, int len)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (i < len)
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
