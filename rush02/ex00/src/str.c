/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:02:39 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/21 15:58:02 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen_to(char *str, char end)
{
	int	i;

	i = 0;
	while (str[i] != end)
	{
		++i;
	}
	return (i);
}

void	ft_strcpy_to(char *dest, char *src, char end)
{
	int	i;
	int	j;
	int	space_found;

	space_found = 0;
	i = 0;
	j = 0;
	while (src[i] != end && src[i] != '\0')
	{
		if (src[i] == ' ')
		{
			if (!space_found)
			{
				dest[j++] = ' ';
				space_found = 1;
			}
		}
		else
		{
			dest[j++] = src[i];
			space_found = 0;
		}
		i++;
	}
	dest[j] = '\0';
}

char	*ft_strdup_to(char *str, char end)
{
	int		size;
	char	*ret;

	size = ft_strlen_to(str, end) + 1;
	ret = malloc(sizeof(char) * size);
	if (!ret)
		return (0);
	ft_strcpy_to(ret, str, end);
	ret[size - 1] = 0;
	return (ret);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
