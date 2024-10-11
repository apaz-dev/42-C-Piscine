/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:16:50 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/14 21:33:12 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GAME_H
# define FT_GAME_H

int		ft_solve(int **board, int pos, int *constraints);
int		ft_valid(int **board, int row, int col, int num);

#endif
