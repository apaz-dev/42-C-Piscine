/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:58:31 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/14 21:28:18 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int	main(int argc, char **argv)
{
	int	*constraints;
	int	**board;
	int	i;
	int	k;

	constraints = (int *)malloc(16 * sizeof(int));
	if (ft_check(argc, argv[1]) == 1)
		return (0);
	i = 0;
	k = 0;
	while (i < 16)
	{
		constraints[i] = argv[1][k] - '0';
		i++;
		k += 2;
	}
	board = ft_create_trablero();
	if (!ft_solve(board, 0, constraints))
		ft_print_error();
	ft_print_board(board);
	free(constraints);
	free(board);
	return (0);
}
