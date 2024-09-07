/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:17:54 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/18 15:28:59 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write (1, &str, 1);
}

int	ft_len(int argc)
{
	int	i;

	i = 0;
	while (i < argc)
		i++;
	return (i - 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	s;
	int	k;

	k = 0;
	s = ft_len(argc);
	while (k < argc - 1)
	{
		i = 0;
		while (argv[s - k][i] != '\0')
		{
			ft_putchar(argv[s - k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}
