/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:03:28 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/11 20:18:31 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	show_comb(int nb)
{
	if (nb > 9)
	{
		ft_putchar((nb / 10) + 48);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	l;
	int	r;

	l = 0;
	while (l <= 99)
	{
		r = l + 1;
		while (r <= 99)
		{
			show_comb(l);
			ft_putchar(' ');
			show_comb(r);
			if (l < 98 || r < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			r++;
		}
		l++;
	}
}
