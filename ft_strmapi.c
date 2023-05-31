/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:39:13 by clcarre           #+#    #+#             */
/*   Updated: 2023/05/31 10:35:58 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		l;

	if (!s || !f)
		return (0);
	l = ft_strlen(s);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < l)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[l] = '\0';
	return (str);
}
