/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:15:35 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/25 17:29:50 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	ic;

	i = ft_strlen(dst);
	c = ft_strlen(src);
	ic = i + c;
	if (dstsize <= i)
		return (dstsize + c);
	c = 0;
	while (i < (dstsize - 1) && src[c] != '\0')
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (ic);
}
