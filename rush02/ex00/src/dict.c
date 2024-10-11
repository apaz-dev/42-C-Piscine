/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:54:18 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/21 14:59:40 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_file_size(char *filename)
{
	char	buf[1024];
	int		file;
	int		file_size;
	int		read_bytes;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	file_size = 0;
	read_bytes = read(file, buf, 1024);
	while (read_bytes)
	{
		file_size += read_bytes;
		read_bytes = read(file, buf, 1024);
	}
	close(file);
	return (file_size);
}

char	*load_dict(char *filename)
{
	char	*dict;
	int		file;
	int		file_size;

	file_size = get_file_size(filename);
	if (!file_size)
		return (0);
	dict = malloc(sizeof(char) * file_size);
	if (!dict)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	read(file, dict, file_size);
	return (dict);
}

int	entry_matches(char *str, char *to_find)
{
	int	j;

	j = 0;
	while (1)
	{
		if (!str[j])
			return (0);
		if (!to_find[j] && !is_num(str[j]))
			return (1);
		if (str[j] == to_find[j])
			++j;
		else
			break ;
	}
	return (0);
}

char	*find_entry(char *str, char *to_find)
{
	int	i;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] != '\n')
		{
			++i;
			continue ;
		}
		++i;
		if (entry_matches(str + i, to_find))
			return (str + i);
		++i;
	}
	return (0);
}

char	*get_val(char *buf, char *key)
{
	int		i;
	char	*s;

	s = find_entry(buf, key);
	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] >= '0' && s[i] <= '9')
		++i;
	while (s[i] && s[i] == ' ')
		++i;
	if (s[i] && s[i] != ':')
		return (0);
	++i;
	while (s[i] && s[i] == ' ')
		++i;
	return (ft_strdup_to(&s[i], '\n'));
}
