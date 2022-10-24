/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:57:59 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/02 09:42:33 by clcarre          ###   ########.fr       */
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

// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("aaabcabcd", "aaabc", 5));
// 	printf("%s\n", strnstr("aaabcabcd", "aaabc", 5));
// 	return (0);
// }
