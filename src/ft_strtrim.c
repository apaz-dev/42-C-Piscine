/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:26:44 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/09/24 18:28:40 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int     j;
	int     i;

	str = (char *)malloc(ft_strlen(s1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (j < ft_strlen(set))
	{
		if (set[j] == 0)
			break;
		if (s1[j] == set[j])
			j++;
		else
			break ;
	}
	i = 0;
	while (j < ft_strlen(s1))
		str[i++] = s1[j++];
	return(str);
}
