/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:31:53 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/23 16:54:34 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (nb < 0 || power < 0)
		return (0);
	if (power >= 2)
	{
		while (power != 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	power;

	i = 0;
	power = 0;
	printf("%d\n", ft_iterative_power(i, power));
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(-2, 2));
	printf("%d\n", ft_iterative_power(i, -2));
	printf("%d\n", ft_iterative_power(-2, power));
	printf("%d\n", ft_iterative_power(2, -1));
	return (0);
}*/
