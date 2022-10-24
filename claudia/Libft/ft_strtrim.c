/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 08:43:29 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/05 10:27:54 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descripción:
Reserva con malloc(3) y devuelve una copia de ’s1’
con los caracteres dados en ’set’ eliminados 
tanto del principio como del final.
Valor devuelto:
- La string recortada. 
- NULL si falla la reserva.
Funciones autorizadas: malloc.
*/
#include "libft.h"

char	*ft_return_s(const char *s1, int i)
{
	char	*str;
	int		c;

	str = malloc(sizeof(char) * i);
	if (!str)
		return (0);
	c = 0;
	while (s1[c])
	{
		str[c] = s1[c];
		c++;
	}
	str[c] = '\0';
	return (str);
}

static int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	c;

	i = 0;
	while (s1[i])
	{	
		c = 0;
		if (s1[i] == set[c])
			i++;
		else
		{
			while (s1[i] != set[c])
			{
				c++;
				if (set[c] == '\0')
					return (i);
			}
			i++;
		}
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	c;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		c = 0;
		if (s1[i] == set[c])
			i--;
		else
		{
			while (s1[i] != set[c])
			{
				c++;
				if (set[c] == '\0')
					return (i);
			}
			i--;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str;

	if (!s1)
		return (0);
	i = ft_strlen(s1);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (*set == '\0')
		return (ft_return_s(s1, i));
	else if (start == i)
		str = malloc(sizeof(char));
	else
		str = malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (0);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("          ", " "));
// 	return (0);
// }
