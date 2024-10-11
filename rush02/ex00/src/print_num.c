/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoraled <dmoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:35:24 by dmoraled          #+#    #+#             */
/*   Updated: 2024/07/21 15:10:59 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	g_separator = 0;

int	print_string(char *str)
{
	if (!str)
		return (0);
	write(1, &g_separator, 1);
	update_separator(&g_separator);
	while (*str)
		write(1, str++, 1);
	return (1);
}

int	print_1(char *dict, char *str)
{
	char	buf[2];

	if (str[0] == '0')
		return (0);
	buf[0] = str[0];
	buf[1] = 0;
	if (!print_string(get_val(dict, buf)))
		return (-1);
	return (1);
}

int	print_2(char *dict, char *str)
{
	char	buf[3];

	if (str[0] == '1')
	{
		buf[0] = str[0];
		buf[1] = str[1];
		buf[2] = 0;
		if (print_string(get_val(dict, buf)))
			return (-1);
	}
	else if (str[0] != '0')
	{
		buf[0] = str[0];
		buf[1] = '0';
		buf[2] = 0;
		if (!print_string(get_val(dict, buf)))
			return (-1);
		print_1(dict, str + 1);
	}
	else
		return (print_1(dict, str + 1));
	return (1);
}

int	print_3(char *dict, char *str)
{
	char	buf[3];
	char	*zeroes;

	if (str[0] == '0')
		return (print_2(dict, str + 1));
	buf[0] = str[0];
	buf[1] = 0;
	if (!print_string(get_val(dict, buf)))
		return (-1);
	zeroes = build_zeroes(2);
	if (!print_string(get_val(dict, zeroes)))
		return (-1);
	free(zeroes);
	print_2(dict, str + 1);
	return (1);
}

int	print_num(char *dict, char *str, int digit)
{
	char	*zero_buf;
	int		mod;
	int		zero_c;

	if (!check_num(dict, str, digit))
		return (0);
	zero_c = print_three_digits(dict, str, digit, &mod);
	if (zero_c < 0)
		return (0);
	if (digit > 3)
	{
		zero_buf = build_zeroes(digit - mod);
		if (zero_c)
			if (!print_string(get_val(dict, zero_buf)))
				return (0);
		free(zero_buf);
		print_num(dict, &str[mod], digit - mod);
	}
	return (1);
}
