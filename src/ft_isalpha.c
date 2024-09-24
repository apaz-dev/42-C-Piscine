/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-pri <apaz-pri@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:21:15 by apaz-pri          #+#    #+#             */
/*   Updated: 2024/09/20 18:46:07 by apaz-pri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int	c)
{
	if ((c >= 97 && c <= 122) || (c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));
    printf("\nResult when uppercase alphabet is passed ori: %d", isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));
    printf("\nResult when lowercase alphabet is passed ori: %d", isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));
    printf("\nResult when non-alphabetic character is passed ori: %d", isalpha(c));

    return 0;
}*/
