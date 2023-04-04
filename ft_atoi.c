/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:32:08 by clcarre           #+#    #+#             */
/*   Updated: 2023/04/04 13:38:30 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	s;
	long long int	r;
	int				i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	s = 1;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	r = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			r = (r * 10) + (str[i++] - 48);
		else
			return (write(1, "Error\n", 6));
		if ((r * s) > 2147483647 || (r * s) < -2147483648)
			return (write(1, "Error\n", 6));
	}
	return (s * r);
}
