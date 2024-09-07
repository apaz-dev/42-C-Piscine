/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:08:15 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/14 21:27:42 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_game.h"

int	ft_solve(int **board, int pos, int *constraints)
{
	int	row;
	int	col;
	int	num;

	row = pos / 4;
	col = pos % 4;
	if (pos == 16)
	{
		return (1);
	}
	num = 1;
	while (num <= 4)
	{
		if (ft_valid(board, row, col, num))
		{
			board[row][col] = num;
			if (ft_solve(board, pos + 1, constraints))
			{
				return (1);
			}
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}
