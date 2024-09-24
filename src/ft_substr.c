/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:44:43 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/09/24 16:56:24 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(len * sizeof(char));
	i = 0;
	while(start <= len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char s[] = "Holaaaa";
	char *result;

	result = ft_substr(s, 1, 4);
	printf("%s\n", result);
}
