/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:31:49 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/14 21:32:04 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(int **board)
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			ft_putchar(board[r][c] + '0');
			if (c < 3)
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}
