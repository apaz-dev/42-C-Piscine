/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matriz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:24:20 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/14 21:38:05 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**ft_create_trablero(void)
{
	int	c;
	int	r;
	int	**array;

	array = (int **)malloc(4 * sizeof(int *));
	r = 0;
	while (r < 4)
	{
		array[r] = (int *)malloc(4 * sizeof(int));
		c = 0;
		while (c < 4)
		{
			array[r][c] = 0;
			c++;
		}
		r++;
	}
	return (array);
}

int	*ft_constraints(char *argv)
{
	int	i;
	int	*constraints;

	constraints = malloc(sizeof(int) * 16);
	if (constraints == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < 16)
	{
		if (i == 0 || argv[i - 1] == ' ')
		{
			constraints[i] = argv[i] - 48;
		}
		i++;
	}
	return (constraints);
}
