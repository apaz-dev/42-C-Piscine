/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:10:33 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/21 22:03:20 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*check_input(char *str, int *size)
{
	int	start;
	int	i;

	i = 0;
	while (str[i] == ' ')
		++i;
	start = i;
	if (!is_num(str[i]))
		return (0);
	while (str[i])
	{
		if (!is_num(str[i]))
		{
			*size = i - start;
			return (&str[start]);
		}
		++i;
	}
	*size = i - start;
	return (&str[start]);
}

int	rush(char *dict, char **argv)
{
	int		input_s;
	char	*input;

	input = check_input(argv[1], &input_s);
	if (!input)
	{
		write(2, "Error\n", 6);
		free(dict);
		return (1);
	}
	if (!print_num(dict, input, input_s))
	{
		write(2, "Dict Error\n", 11);
		free(dict);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*dict;

	if (argc > 3 || argc < 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (argc == 3)
		dict = load_dict(argv[2]);
	else
		dict = load_dict("numbers.dict");
	if (!dict)
	{
		write(2, "Dict Error\n", 11);
		free(dict);
		return (1);
	}
	if (rush(dict, argv) != 0)
		return (1);
	free(dict);
	return (0);
}
