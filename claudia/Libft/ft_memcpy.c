/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:29:59 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/24 16:52:14 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	char		*destino;
	const char	*origen;

	destino = dst;
	origen = src;
	i = 0;
	while (i < n)
	{
		destino[i] = origen[i];
		i++;
	}
	return (destino);
}
