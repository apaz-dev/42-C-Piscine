/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:04:55 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/25 15:43:18 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	range_size;

	range_size = max - min;
	arr = (int *)malloc(range_size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	i = 0;
	while (i < range_size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
