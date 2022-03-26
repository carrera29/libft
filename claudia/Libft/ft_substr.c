/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:23:01 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/26 09:19:10 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reserva con malloc(3) memoria para devolver una string nueva basada en la string ’s’.
La nueva string empieza en el índice ’start’ y tiene una longitud máxima ’len’.
Valor devuelto: 
- La nueva string. 
- NULL si la reserva de memoria falla.
Funciones autorizadas: malloc
*/
#include "ft_strlen.c"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		c;

	i = ft_strlen(s);
	str = malloc(sizeof(char) * i);
	if (str == NULL)
		return (0);
	c = 0;
	while (len >= 0 && s[start])
	{
		str[c] = s[start];
		len--;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_substr("hola morena como estás", 6, 6));
	return (0);
}
