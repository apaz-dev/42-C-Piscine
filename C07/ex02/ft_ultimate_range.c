/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:54:01 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/25 16:24:05 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	range_size;

	range_size = max - min;
	arr = (int *)malloc(range_size * sizeof(int));
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	if (min >= max)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	*range = arr;
	while (i < range_size)
	{
		arr[i] = min + i;
		i++;
	}
	return (range_size);
}
/*#include <stdio.h>
int main() {
    int min = 1;
    int max = 10;
    int *range;
    int size;

    size = ft_ultimate_range(&range, min, max);
    printf("Rango de %d a %d:\n", min, max);
    for (int i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    free(range);
    return (i);
}*/
