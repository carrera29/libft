/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:51:51 by clcarre           #+#    #+#             */
/*   Updated: 2023/05/31 10:35:40 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		ii;

	if (!s1)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	ii = 0;
	while (s2[ii])
		str[i++] = s2[ii++];
	str[i] = '\0';
	return (str);
}
