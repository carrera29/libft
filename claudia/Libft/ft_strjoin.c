/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:51:51 by clcarre           #+#    #+#             */
/*   Updated: 2022/04/04 10:35:04 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descripción:
Reserva con malloc(3) una nueva string, basada en
la unión de las 2 strings dadas como parámetros.
Valor devuelto:
- La nueva string. 
- NULL si la reserva falla.
Funciones autorizadas: malloc
*/
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

// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("hola,", " como estas"));
// 	return (0);
// }
