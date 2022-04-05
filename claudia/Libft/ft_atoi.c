/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:32:08 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/02 10:41:34 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	s;
	long int	r;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	s = 1;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	r = 0;
	while (*str >= 48 && *str <= 57)
	{
		if ((r * s) > 2147483647)
			return (-1);
		else if ((r * s) < -2147483647)
			return (0);
		r = (r * 10) + (*str - 48);
		str++;
	}
	return (s * r);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("99999999999999999999999999"));
	printf("%d\n", atoi("99999999999999999999999999"));
	return (0);
}*/
