/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:25:21 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/11 21:25:32 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_letter(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np >= 16)
	{
		hex_letter(np / 10);
		hex_letter(np % 10);
	}
	else
		write(1, &hex[np], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			hex_letter(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
