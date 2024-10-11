/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:11:23 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/21 15:13:37 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*load_dict(char *filename);
char	*get_val(char *buf, char *key);
char	*find_entry(char *str, char *to_find);

char	*ft_strdup_to(char *str, char end);
void	ft_strcpy_to(char *dest, char *src, char end);
int		ft_strlen_to(char *str, char end);
int		ft_strlen(char *str);

char	*build_zeroes(int zeroes);
int		is_num(char c);
void	update_separator(char *current);
int		print_three_digits(char *dict, char *str, int digit, int *ret_mod);
int		check_num(char *dict, char *str, int digit);

int		print_1(char *dict, char *str);
int		print_2(char *dict, char *str);
int		print_3(char *dict, char *str);
int		print_num(char *dict, char *str, int digit);

#endif
