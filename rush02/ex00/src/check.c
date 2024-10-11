/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:04:11 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/21 15:05:47 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	check_1(char *dict, char *str)
{
	char	buf[2];

	if (str[0] == '0')
		return (0);
	buf[0] = str[0];
	buf[1] = 0;
	if (!get_val(dict, buf))
		return (-1);
	return (1);
}

int	check_2(char *dict, char *str)
{
	char	buf[3];

	if (str[0] == '1')
	{
		buf[0] = str[0];
		buf[1] = str[1];
		buf[2] = 0;
		if (!get_val(dict, buf))
			return (-1);
	}
	else if (str[0] != '0')
	{
		buf[0] = str[0];
		buf[1] = '0';
		buf[2] = 0;
		if (!get_val(dict, buf))
			return (-1);
		check_1(dict, str + 1);
	}
	else
		return (check_1(dict, str + 1));
	return (1);
}

int	check_3(char *dict, char *str)
{
	char	buf[3];
	char	*zeroes;

	if (str[0] == '0')
		return (check_2(dict, str + 1));
	buf[0] = str[0];
	buf[1] = 0;
	if (!get_val(dict, buf))
		return (-1);
	zeroes = build_zeroes(2);
	if (!get_val(dict, zeroes))
		return (-1);
	free(zeroes);
	check_2(dict, str + 1);
	return (1);
}

int	check_three_digits(char *dict, char *str, int digit, int *ret_mod)
{
	int	zero_c;

	*ret_mod = digit % 3;
	zero_c = 0;
	if (*ret_mod == 1)
		zero_c = check_1(dict, str);
	else if (*ret_mod == 2)
		zero_c = check_2(dict, str);
	else if (*ret_mod == 0)
		zero_c = check_3(dict, str);
	if (zero_c < 0)
		return (-1);
	if (*ret_mod == 0)
		*ret_mod = 3;
	return (zero_c);
}

int	check_num(char *dict, char *str, int digit)
{
	char	*zero_buf;
	int		mod;
	int		zero_c;

	zero_c = check_three_digits(dict, str, digit, &mod);
	if (zero_c < 0)
		return (0);
	if (digit > 3)
	{
		zero_buf = build_zeroes(digit - mod);
		if (zero_c)
			if (!get_val(dict, zero_buf))
				return (0);
		free(zero_buf);
		check_num(dict, &str[mod], digit - mod);
	}
	return (1);
}
