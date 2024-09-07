/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:55:28 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/23 17:11:39 by apaz-pri         ###   ########.fr       */
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
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = 0;
	printf("%d\n", ft_is_prime(i));
        printf("%d\n", ft_is_prime(2));
        printf("%d\n", ft_is_prime(-2));
        printf("%d\n", ft_is_prime(3));
        printf("%d\n", ft_is_prime(-3));
        printf("%d\n", ft_is_prime(1));
	printf("%d", ft_is_prime(i));
}*/
