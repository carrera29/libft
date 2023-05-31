/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:57:59 by clcarre           #+#    #+#             */
/*   Updated: 2023/05/31 10:36:04 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] && needle && (i < len))
	{
		c = 0;
		while ((haystack[i++] == needle[c++]) && (i <= len))
		{
			if (needle[c] == '\0')
				return ((char *)&haystack[i - c]);
		}
		i = i - c;
		i++;
	}
	return (0);
}
