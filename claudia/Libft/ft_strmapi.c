/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:39:13 by clcarre           #+#    #+#             */
/*   Updated: 2022/03/30 12:22:10 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descripción:
Aplica la función ’f’ a cada caracter de la string
’s’ para crear la nueva string, resultado de
aplicar sucesivas veces ’f’ (utilizando malloc(3)).
A esta función se le pasará el índice del caracter iterado.
#1. La string que iterar.
#2. Un puntero a la función que aplicar a cada caracter.
Valor devuelto:
- La string resultante de aplicar sucesivas veces ’f’
a cada caracter. 
- NULL si falla la reserva.
Funciones autorizadas: malloc.
*/
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		l;

	l = ft_strlen(s);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	if (!s || !f)
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
/*
char	*f(i, s)
{
	s = 65 + i;
	return (s);
}

int	main(void)
{
	printf("%s\n", ft_strmapi("hola", f));
	return(0);
}
*/
