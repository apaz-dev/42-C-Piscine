/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:08:56 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/21 15:09:16 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

char	*build_zeroes(int zeroes)
{
	char	*buf;
	int		i;

	buf = malloc(sizeof(char) * (zeroes + 2));
	buf[zeroes + 1] = 0;
	buf[0] = '1';
	i = 1;
	while (i <= zeroes)
		buf[i++] = '0';
	return (buf);
}

void	update_separator(char *current)
{
	if (*current == 0)
		*current = ' ';
}

int	print_three_digits(char *dict, char *str, int digit, int *ret_mod)
{
	int	zero_c;

	*ret_mod = digit % 3;
	zero_c = 0;
	if (*ret_mod == 1)
		zero_c = print_1(dict, str);
	else if (*ret_mod == 2)
		zero_c = print_2(dict, str);
	else if (*ret_mod == 0)
		zero_c = print_3(dict, str);
	if (zero_c < 0)
		return (0);
	if (*ret_mod == 0)
		*ret_mod = 3;
	return (zero_c);
}
