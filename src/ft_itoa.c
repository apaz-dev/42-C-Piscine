/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:33:07 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/09/24 19:28:40 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t 	intlen(int n)
{
	size_t	i;
	
	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char    *str;
	int     i;
	size_t	length;

	length = intlen(n);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	i = 0;
	while (n)
	{
		str[length - i - 1] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	str[length] = '\0';
	return (str);
}
