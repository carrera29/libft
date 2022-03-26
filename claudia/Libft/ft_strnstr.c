/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:57:59 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/25 16:55:12 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while ((haystack[i] != '\0') && (i < len))
	{
		c = 0;
		while ((haystack[i] == needle[c]) && (i + c < len))
		{
			c++;
			i++;
			if (needle[c] == '\0')
				return ((char *)&haystack[i - c]);
		}
		i = i - c;
		i++;
	}
	return (0);
}
