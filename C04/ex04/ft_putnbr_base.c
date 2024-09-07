/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:07:58 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/17 12:29:26 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	do_base(int nbr, int nbase, char *base)
{
	if (nbr < nbase)
	{
		print(base[nbr % nbase]);
	}
	else
	{
		do_base(nbr / nbase, nbase, base);
		print(base[nbr % nbase]);
	}
}

int	ft_len_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != 0)
	{
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (-1);
		i++;
	}
	i = 0;
	while (base[i] != 0)
		++i;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	nbase;

	nbase = ft_len_errors(base);
	if (nbase >= 2)
	{
		if (nbr == -2147483648)
		{
			print('-');
			do_base((nbr / nbase) * -1, nbase, base);
			print(base[nbr % nbase * -1]);
		}
		else if (nbr < 0)
		{
			print('-');
			do_base(nbr * -1, nbase, base);
		}
		else
			do_base(nbr, nbase, base);
	}
}
