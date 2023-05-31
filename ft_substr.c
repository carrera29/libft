/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:23:01 by clcarre           #+#    #+#             */
/*   Updated: 2023/05/31 10:36:24 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[i] && i < len && start < ft_strlen(s))
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
