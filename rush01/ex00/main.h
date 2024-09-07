/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:16:50 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/14 21:33:19 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

int		ft_solve(int **board, int pos, int *constraints);
int		ft_valid(int **board, int row, int col, int num);
int		ft_check(int argc, char *argv);
int		**ft_create_trablero(void);

void	ft_print_error(void);
void	ft_print_board(int **board);

#endif
