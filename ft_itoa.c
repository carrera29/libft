/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:23:39 by clcarre           #+#    #+#             */
/*   Updated: 2023/05/31 10:32:49 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contador(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	aux;

	i = ft_contador(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	if (n < 0)
		aux = -n;
	else
		aux = n;
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i--] = aux % 10 + 48;
		aux /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
