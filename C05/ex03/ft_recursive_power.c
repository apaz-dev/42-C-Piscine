/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:17:13 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/23 17:12:28 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb < 0 || power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	power;

	i = 0;
	power = 0;
	printf("%d\n", ft_recursive_power(i, power));
	printf("%d\n", ft_recursive_power(i, power));
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(-2, 2));
	printf("%d\n", ft_recursive_power(i, -2));
	printf("%d\n", ft_recursive_power(-2, power));
	printf("%d\n", ft_recursive_power(2, -1));

	return (0);
}*/
