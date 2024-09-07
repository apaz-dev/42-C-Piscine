/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:44:48 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/17 13:13:28 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_len_errors(char *base)
{
	int     i;
	int     j;

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

int	jumper(char *str)
{
	int	i;
	int	s;

	i = 0;
	s = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			s *= -1;
		i++;
	}
	return (i * s);
}
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nint;
	int	s;
	int	nbase;

	s = 1;
	i = jumper(str);
	if (i < 0)
	{
		s *= -1;
		i *= -1;
	}
	nint = 0;
	nbase = ft_len_errors(base);
	if (nbase >= 16)
	{
		while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') 
					|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			nint = (nint * 10) + (str[i] - '0');
			i++;
		}
	}
	else
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			nint = (nint * 10) + (str[i] - '0');
			i++;
		}
	}
	return (nint * s);
}