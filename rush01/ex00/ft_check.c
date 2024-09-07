/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:15:25 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/14 21:41:02 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check.h"

int	ft_check(int argc, char *argv)
{
	int	i;

	if (argc != 2)
		ft_print_error();
	i = 0;
	while (argv[i])
	{
		if (((argv[i] != ' ' && argv[i] != '1' && argv[i] != '2')
				&& (argv[i] != '3' && argv[i] != '4')))
		{
			ft_print_error();
			return (1);
		}
		if ((i % 2 != 0) && argv[i] != ' ')
		{
			ft_print_error();
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_valid(int **board, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == num || board[i][col] == num)
			return (0);
		i++;
	}
	// REMEMBER PAZ -> U NEED ADD MORE RULES =)
	return (1);
}
