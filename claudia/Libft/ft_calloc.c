/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:36:58 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/08 08:48:11 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (size >= SIZE_MAX)
		return (0);
	str = malloc(count * size);
	if (!str)
		return (0);
	ft_bzero(str, (count * size));
	return (str);
}
