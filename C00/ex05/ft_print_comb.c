/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:50:18 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/04 21:18:31 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	f;
	int	s;
	int	t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				write (1, &f, 1);
				write (1, &s, 1);
				write (1, &t, 1);
				if (f != '7')
					write (1, ", ", 2);
				t++;
			}
			s++;
		}
		f++;
	}
}
