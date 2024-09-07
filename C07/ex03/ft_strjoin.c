/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:04:02 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/07/24 19:26:16 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	str = (char *)malloc(size * sizeof(char));
	i = 0;
	while (strs[i] != sep)
	{
		strs[k] = str[k];
		i++;
		k++;
	}
}
/*
int	main(void)
{

}*/
