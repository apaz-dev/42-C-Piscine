/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:17:32 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/23 17:12:07 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while ((nb % i != 0) && i < nb)
		i++;
	if (nb == i)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = 0;
	printf("%d\n", ft_find_next_prime(i));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(-3));
	printf("%d\n", ft_find_next_prime(1));
}*/
